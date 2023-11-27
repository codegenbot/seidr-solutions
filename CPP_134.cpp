#include <string>

bool isLastCharALetter(string txt){
    int len = txt.length();
    if(len == 0)
        return false;
    if(isalpha(txt[len-1])){
        if(txt[len-2] == ' ' || len == 1)
            return true;
    }
    return false;
}