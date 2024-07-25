#include <cstring>

bool is_happy(const char* s){
    if(strlen(s) < 3) return false;
    for(int i = 0; i < strlen(s) - 2; ++i){
        if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2]){
            return false;
        }
    }
    return true;
}