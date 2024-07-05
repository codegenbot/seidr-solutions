#include <iostream>
#include <cctype>
#include <cassert>
#include <string>

bool check_if_last_char_is_a_letter(const std::string &txt) {
    if (txt.empty() || txt.back() == ' ')
        return false;
    int n = txt.length();
    if (isalpha(txt[n - 1])) {
        for (int i = n - 2; i >= 0; --i) {
            if (txt[i] == ' ')
                return true;
            if (isalpha(txt[i]))
                return false;
        }
    }
    return false;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    assert(check_if_last_char_is_a_letter("banana ") == false);
    assert(check_if_last_char_is_a_letter("cherry") == true);
    assert(check_if_last_char_is_a_letter("fruit pies") == true);
    assert(check_if_last_char_is_a_letter("") == false);
    assert(check_if_last_char_is_a_letter("   ") == false);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}