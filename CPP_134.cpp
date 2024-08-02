#include <iostream>
#include <string>
#include <cctype>
bool check_if_last_char_is_a_letter(const std::string& txt) {
    return !isalpha(txt.back()) && txt.size() > 0 && !isalpha(txt[txt.size() - 2]);
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);

    return 0;
}