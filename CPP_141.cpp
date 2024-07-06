```cpp
#include <cassert>
#include <string>

bool file_name_check(const std::string& filename) {
    size_t dot_pos = filename.find('.');
    if (dot_pos == std::string::npos || dot_pos == 0) {
        return false;
    }
    return true;
}

int main_test() {
    assert(file_name_check("s.") == true);
    return 0;
}