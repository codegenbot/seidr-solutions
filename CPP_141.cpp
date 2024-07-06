```cpp
#include <cassert>
#include <string>

bool file_name_check(const std::string& file_name) {
    if (file_name.find('.') == string::npos) {
        return true;
    } else {
        return false;
    }
}

int main_test() {
    assert(file_name_check("s.") == false);
    return 0;
}