#include <string>

bool check_if_last_char_is_a_letter(std::string txt){
    int len = txt.length();
    if(len == 0){
        return false;
    }
    char lastChar = txt[len-1];
    if(isalpha(lastChar)){
        if(lastChar == ' '){
            return true;
        }
        for(int i=len-2; i>=0; i--){
            if(txt[i] == ' '){
                return false;
            }
        }
        return true;
    }
    return false;
}