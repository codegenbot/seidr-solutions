```cpp
#include <cctype>
#include <string>

bool check_if_last_char_is_a_letter(std::string txt) {
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' '){
            break;
        }
    }
    return !txt.empty() && isalpha(txt.back()) ? false : true;
}