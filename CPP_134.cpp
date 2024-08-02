#include <iostream>
#include <string>
#include <cassert>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string &txt);

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    assert(check_if_last_char_is_a_letter("orange pi e") == true);

    return 0;
}

bool check_if_last_char_is_a_letter(const std::string &txt) {
    return !txt.empty() && isalpha(txt.back()) && std::isspace(txt[txt.size() - 2]);
}