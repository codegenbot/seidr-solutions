#include <iostream>
#include <cassert>
#include <string>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string &txt) {
    if (txt.empty()) return false;
    char lastChar = txt.back();
    return isalpha(lastChar) && txt.find_last_of(" ") == txt.size() - 1;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    assert(check_if_last_char_is_a_letter("test1 test2 ") == true);
    assert(check_if_last_char_is_a_letter("end with letter x ") == false);
    
    return 0;
}