#include <iostream>
#include <cctype>
#include <cassert>

bool check_if_last_char_is_a_letter(const std::string& txt) {
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
    assert(check_if_last_char_is_a_letter("apple pie ") == false);
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}