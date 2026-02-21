#include "spvm_native.h"

// Include sqlite3.h provided by Resource::SQLite
#include "sqlite3.h"

int32_t SPVM__TestCase__Resource__SQLite__test(SPVM_ENV* env, SPVM_VALUE* stack) {
  
  // Get the SQLite library version number (e.g., 3045000)
  int32_t version_number = sqlite3_libversion_number();
  
  // Check if the version number is valid (greater than 0)
  if (version_number > 0) {
    stack[0].ival = 1;
  }
  else {
    stack[0].ival = 0;
  }
  
  return 0;
}
