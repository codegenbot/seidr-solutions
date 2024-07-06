```cpp
#include <cassert>
#include <string>

bool file_name_check(const std::string& file_name) {
    return !file_name.find('.') == std::string::npos;
}

int main_test() {
    assert(file_name_check("s.") == false);
    return 0;
}