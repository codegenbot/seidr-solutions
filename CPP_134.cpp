#include <string>
#include <cassert>

bool check_if_last_char_is_a_letter(std::string txt) {
    if (txt.empty()) {
        return false;
    }
    
    size_t last_space_index = txt.find_last_of(' ');
    char last_char = txt.back();
    
    if ((last_char >= 'a' && last_char <= 'z') || (last_char >= 'A' && last_char <= 'Z')) {
        if (last_space_index == std::string::npos || last_space_index == txt.length() - 1) {
            return true;
        }
    }
    
    return false;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    // Other test cases...
    return 0;
}