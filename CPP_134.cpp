#include <string>

bool check_if_last_char_is_a_letter(std::string txt){
    if(txt.empty())
        return false;
    int len = txt.length();
    char last_char = txt[len-1];
    if(isalpha(last_char)){
        int i = len-2;
        while(i >= 0 && txt[i] != ' '){
            if(isalpha(txt[i]))
                return false;
            i--;
        }
        return true;
    }
    return false;
}