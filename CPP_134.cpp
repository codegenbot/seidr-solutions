#include <string>
#include <cctype>
#include <cassert>

bool check_if_last_char_is_a_letter(std::string txt){
    if(txt.empty()){
        return false;
    }
    int n = txt.size();
    char lastChar = txt[n-1];
    if(std::isalpha(lastChar)){
        if(txt[n-2] == ' '){
            return true;
        }
    }
    return false;
}