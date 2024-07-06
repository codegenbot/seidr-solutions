#include <cassert>
#include <string>

bool file_name_check(const std::string& file_name) {
    if (file_name.size() > 4 || file_name.back() != '.') {
        return false;
    }
    return true;
}

int main_test() {
    assert(!file_name_check("s."));
    return 0;
}