#include <iostream>
#include <string>

std::string encrypt(std::string s) {
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'i'){
            result += (c - 2 <= 'a') ? (char)('z' - 'a' + 1 + c - 2) : (char)(c - 2);
        } else if(c >= 'j' && c <= 'n'){
            result += (c - 2 <= 'n') ? (char)('o' - 'n' + 1 + c - 2) : (char)(c - 2);
        } else if(c >= 'o' && c <= 'v'){
            result += (c - 2 <= 'v') ? (char)('w' - 'v' + 1 + c - 2) : (char)(c - 2);
        } else if(c >= 'w' && c <= 'z'){
            result += (c - 2 <= 'z') ? (char)('a' - 'z' + 1 + c - 2) : (char)(c - 2);
        } else {
            result += c;
        }
    }
    return result;
}