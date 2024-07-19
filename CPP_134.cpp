#include <string>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    if (txt.empty()) {
        return false;
    }

    char lastChar = txt.back();
    if (std::isalpha(lastChar)) {
        size_t lastSpacePos = txt.find_last_of(' ');
        if (lastSpacePos == std::string::npos) {
            return true;
        } else {
            return lastSpacePos > txt.find_last_not_of(' ');
        }
    }

    return false;
}