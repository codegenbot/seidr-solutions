```cpp
#include <string>

bool check_if_last_char_is_a_letter(std::string txt) {
    if (txt.empty()) return false;
    std::string last_char = txt.substr(txt.length()-1, 1);
    for(int i=0; i<txt.length()-1; i++){
        if(txt[i] == ' '){
            if(last_char == txt.substr(i+1,1)){
                return false;
            }
        }
    }
    for (char c = 'a'; c <= 'z'; ++c) {
        if (last_char == std::string(1, c)) {
            return true;
        }
    }
    for (char c = 'A'; c <= 'Z'; ++c) {
        if (last_char == std::string(1, c)) {
            return true;
        }
    }
    return false;
}