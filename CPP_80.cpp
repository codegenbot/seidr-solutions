#include <string>

bool is_happy(string s){
    if(s.length() < 3) return false;
    for(int i = 0; i < s.length()-2; i++){
        bool unique = true;
        string substr = s.substr(i,3);
        for(char c : substr){
            if(find(substr.begin(),substr.end(),c)-substr.end() >= 0){
                unique = false;
                break;
            }
        }
        if(unique) return true;
    }
    return false;
}