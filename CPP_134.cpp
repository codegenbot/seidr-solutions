#include <iostream>
#include <cctype>
#include <cassert>
#include <string>

bool check_if_last_char_is_a_letter(const std::string &txt) {
    if (txt.empty() || txt.back() == ' ')
        return false;
    int n = txt.length();
    if (isalpha(txt[n - 1])) {
        for (int i = n - 2; i >= 0; --i) {
            if (txt[i] == ' ')
                return true;
            if (isalpha(txt[i]))
                return false;
        }
    }
    return false;
}