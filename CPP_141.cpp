#include <cassert>

bool file_name_check(const std::string& file_name) {
    size_t dot_position = file_name.find('.');
    if (dot_position != std::string::npos) {
        return true;
    }
    return false;
}

int main_test() {
    assert(!file_name_check("s."));
    return 0;
}