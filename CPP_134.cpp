#include <iostream>
#include <cassert>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    return !isalpha(txt.back()) && !isalnum(txt[txt.length() - 2]);
}

int main() {
    // Test cases
    assert (check_if_last_char_is_a_letter("apple pie") == false);
    assert (check_if_last_char_is_a_letter("apple pi e ") == false);

    std::cout << "All test cases passed." << std::endl;

    return 0;
}