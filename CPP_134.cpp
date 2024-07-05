#include <iostream>
#include <string>
#include <cassert>
#include <cctype>

bool check_if_last_char_is_a_letter(std::string txt) {
    if (txt.empty() || txt.back() == ' ') return false;
    if (isalpha(txt.back())) {
        size_t last_space = txt.find_last_of(' ');
        return last_space == std::string::npos || last_space == txt.size() - 2;
    }
    return false;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pie ") == false);
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    assert(check_if_last_char_is_a_letter("") == false);
    assert(check_if_last_char_is_a_letter("a ") == false);
    assert(check_if_last_char_is_a_letter("a") == true);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}