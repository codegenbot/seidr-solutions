#include <string>

int count_upper(const std::string& s){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if(c >= 'A' && c <= 'Z'){
            count++;
        }
    }
    return count;
}