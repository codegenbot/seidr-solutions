#include <iostream>
#include <cassert>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    if (txt.empty()) {
        return false;
    }
    
    char lastChar = txt.back();
    
    if (isalpha(lastChar)) {
        int i = txt.size() - 2;
        while (i >= 0 && txt[i] != ' ') {
            i--;
        }
        if (i >= 0 && txt[i] == ' ') {
            return true;
        }
    }
    
    return false;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    
    return 0;
}