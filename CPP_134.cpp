#include <iostream>
#include <cassert>

bool check_if_last_char_is_a_letter(std::string txt) {
    if(txt.empty())
        return false;
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        if(txt.size() == 1 || txt[txt.size()-2] == ' ')
            return true;
    }
    return false;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    
    return 0;
}