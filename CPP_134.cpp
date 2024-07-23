#include <cassert>
#include <iostream>
#include <cctype>
#include <string>

bool check_if_last_char_is_a_letter(const std::string& str);

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
}

bool check_if_last_char_is_a_letter(const std::string& str) {
    if(str.empty()) return true;
    
    char c = str.back();
    return std::isalpha(c);
}