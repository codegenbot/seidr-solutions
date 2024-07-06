#include <string>
#include <algorithm>

int is_happy(std::string s) {
    if(s.length() < 3) return 0;
    for(int i = 0; i < s.length()-2; i++){
        bool unique = true;
        std::string substr = s.substr(i,3);
        for(char c : substr){
            if(std::find(substr.begin(),substr.end(),c)-substr.end() >= 0){
                unique = false;
                break;
            }
        }
        if(unique) return 1;
    }
    return 0;
}