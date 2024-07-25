#include <iostream>
#include <cctype>
#include <cassert>

bool check_if_last_char_is_a_letter(const std::string &txt) {
    return !isalpha(txt.back()) && !isalnum(txt[txt.length() - 2]);
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    
    return 0;
}