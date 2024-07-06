#include <iostream>
#include <cctype>
#include <string>

bool check_if_last_char_is_a_letter(std::string txt) {
    if (txt.empty()) return false;
    char lastChar = txt.back();
    if (!isalpha(lastChar)) return false;
    for (int i = 0; i < txt.length() - 1; i++) {
        if (!std::isspace(txt[i]) && !isalpha(txt[i])) return true;
    }
    return false;
}