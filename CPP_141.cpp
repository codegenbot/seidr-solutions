```cpp
#include <cassert>
#include <string>

bool file_name_check(const std::string& file_name) {
    if (file_name.size() > 4 || file_name.substr(file_name.size()-1).find('.') == std::string::npos) {
        return false;
    }
    return true;
}

int main_test() {
    assert(!file_name_check("s."));
    return 0;
}