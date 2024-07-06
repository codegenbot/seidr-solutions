#include <cassert>
#include "file_name_check.h"

int main_test() {
    assert(file_name_check("s.") == true);
    return 0;
}