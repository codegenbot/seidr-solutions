#include <string>

bool check_if_last_char_is_a_letter(std::string txt) {
    if (txt.empty()) {
        return false;
    }

    char lastChar = txt.back();

    if (lastChar >= 'a' && lastChar <= 'z' || lastChar >= 'A' && lastChar <= 'Z') {
        if (txt.find_last_of(' ') == txt.length() - 1) {
            return true;
        }
    }

    return false;
}