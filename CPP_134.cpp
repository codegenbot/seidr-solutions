#include <iostream>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string& str) {
    if(str.empty()) {
        return false;
    }
    char last_char = str.back();
    return std::isalpha(last_char);
}

int main() {
    assert(!check_if_last_char_is_a_letter("apple pi e "));
    return 0;
}