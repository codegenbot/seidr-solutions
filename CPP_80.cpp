```c++
#include <string>
bool is_happy(std::string s){
    if(s.length() < 3) return false;
    for(int i = 0; i <= s.length()-3; i++){
        std::string substr = s.substr(i, 3);
        bool unique = true;
        for(char c : substr){
            if(std::count(substr.begin(), substr.end(), c) > 1){
                unique = false;
                break;
            }
        }
        if(!unique) return false;
    }
    return true;