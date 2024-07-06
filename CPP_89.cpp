#include <string>

std::string encrypt(std::string s){
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            c = ((c - 'a') + 8) % 26 + 'a';
        } else if(c >= 'A' && c <= 'Z'){
            c = ((c - 'a' + 26) % 26) + 'a'; // Convert to lowercase before encryption
        }
        result += c;
    }
    return result;
}