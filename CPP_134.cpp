#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    if (txt.empty()) return false;
    char last_char = txt.back();
    return isalpha(last_char) && (txt.length() == 1 || txt[txt.length() - 2] == ' ');
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pie ") == true);
    
    return 0;
}