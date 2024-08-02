#include <iostream>
#include <string>
#include <cassert>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string &txt) {
    return !txt.empty() && std::isalpha(txt.back());
}

int main() {
    assert(check_if_last_char_is_letter("apple pi e ") == false);

    return 0;
}