#include <cctype>
#include <cstddef>
#include <string>
#include <cassert>
#include <iostream>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    if (txt.empty() || txt.back() == ' ') return false;
    if (!isalpha(txt.back())) return false;
    std::size_t last_space = txt.find_last_of(' ');
    return last_space == std::string::npos || last_space == txt.size() - 2;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e") == true);  // Example test
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    assert(check_if_last_char_is_a_letter("apple pi!") == false);
    assert(check_if_last_char_is_a_letter("apple pie") == true);

    std::cout << "All tests passed!" << std::endl;
    return 0;
}