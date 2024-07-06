#include <cassert>
#include <string>

bool file_name_check(const std::string& file_name) {
    if (file_name.size() > 4 || file_name.find('.') == std::string::npos) {
        return false;
    }
    if (std::find(file_name.begin(), file_name.end(), '.') != file_name.end()) {
        return true;
    } else {
        return false;
    }
}

int main_test() {
    assert(!file_name_check("s."));
    return 0;
}