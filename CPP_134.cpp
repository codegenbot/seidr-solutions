#include <iostream>
#include <string>
#include <cassert>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    if (txt.empty()) {
        return false;
    }
    
    char lastChar = txt.back();
    
    if (isalpha(lastChar)) {
        for (int i = txt.size() - 2; i >= 0; i--) {
            if (txt[i] == ' ') {
                return true;
            } else if (isalpha(txt[i])) {
                return false;
            }
        }
        return true;
    }
    
    return false;
}

int main() {
    assert (check_if_last_char_is_a_letter("apple pi e ") == false);
    // Add more test cases as needed
    
    return 0;
}