#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    if (txt.empty() || !std::isalpha(txt.back())) return false;
    size_t last_space = txt.find_last_of(' ');
    return (last_space == std::string::npos || last_space == txt.size() - 2);
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pie ") == false);
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    assert(check_if_last_char_is_a_letter("apple pie a") == true);
    assert(check_if_last_char_is_a_letter("12345") == false);
    std::cout << "All test cases pass." << std::endl;
    return 0;
}