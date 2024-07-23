#include <string>

int check_if_last_char_is_a_letter(std::string str) {
    if (str.length() > 0) {
        char last_char = str[str.length()-1];
        if ((last_char >= 'a' && last_char <= 'z') || (last_char >= 'A' && last_char <= 'Z')) {
            return true;
        }
    }
    return false;
}