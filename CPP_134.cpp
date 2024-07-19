#include <iostream>
#include <string>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    if(txt.empty()) return false;
    for(int i=0; i<txt.length(); i++){
        if(!isalpha(txt[i])) {
            if(i==txt.length()-1) return 0;
            else return isalpha(txt[i+1]);
        }
    }
    return true;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == true);
    return 0;
}