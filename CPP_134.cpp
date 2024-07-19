#include <iostream>
#include <string>
#include <cctype>

int check_if_last_char_is_a_letter(const std::string& txt) {
    if(txt.empty()) return 0;
    for(int i=0; i<txt.length(); i++){
        if(!isalpha(txt[i])) {
            if(i==txt.length()-1) return 0;
            else return isalpha(txt[i+1]);
        }
    }
    return 1;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == 0);
    return 0;
}