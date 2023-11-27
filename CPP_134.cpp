#include <string>

bool check_if_last_char_is_a_letter(string txt){
    int len = txt.length();
    if(len == 0)
        return false;
    if(!isalpha(txt[len-1]))
        return false;
    if(txt[len-1] == ' ')
        return false;
    
    int i = len-2;
    while(i >= 0 && txt[i] != ' '){
        if(isalpha(txt[i]))
            return false;
        i--;
    }
    return true;
}

assert (check_if_last_char_is_a_letter("apple pi e ") == false);