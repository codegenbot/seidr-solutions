#include <iostream>
#include <cctype>
#include <cassert>
#include <string>

bool check_if_last_char_is_a_letter(const std::string &txt) {
    if (txt.empty() || txt.back() == ' ')
        return false;
    int n = txt.length();
    if (isalpha(txt[n - 1]))
        return true;
    return false;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    assert(check_if_last_char_is_a_letter("apple") == true);
    assert(check_if_last_char_is_a_letter("apple ") == false);
    assert(check_if_last_char_is_a_letter("") == false);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}