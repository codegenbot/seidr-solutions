#include <string>

bool check_if_last_char_is_a_letter(std::string txt) {
    if (txt.empty()) return false;
    std::string lastChar = txt.substr(txt.length() - 1);
    bool isLetter = std::isalpha(lastChar[0]);
    return !std::isalpha(txt.rfind(' ')) && isLetter;
}