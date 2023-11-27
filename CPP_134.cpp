#include <string>
#include <cctype>

bool check_if_last_char_is_a_letter(std::string txt){
    if(txt.empty()){
        return false;
    }
    int n = txt.length();
    char lastChar = txt[n-1];
    if(std::isalpha(lastChar)){
        if(n > 1 && txt[n-2] != ' '){
            return false;
        }
        return true;
    }
    return false;
}