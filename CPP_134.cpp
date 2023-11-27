#include <string>

bool check_if_last_char_is_a_letter(std::string txt){
    int len = txt.length();
    if(len == 0){
        return false;
    }
    if(!isalpha(txt[len-1])){
        return false;
    }
    for(int i=len-2; i>=0; i--){
        if(txt[i] == ' '){
            return true;
        }
    }
    return false;
}