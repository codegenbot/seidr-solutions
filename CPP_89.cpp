#include <string>

std::string encrypt(std::string s){
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'm'){
            c += 2;
        }
        else if(c > 'm' && c < 'z'){
            c -= 26 - 2;
        }
        result += c;
    }
    return result;
}