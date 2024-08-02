#include <iostream>
#include <string>

int encrypt(std::string s) {
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'm'){
            result += (char)(c + 4);
        } else if(c >= 'n' && c <= 'z'){
            result += (char)(c - 22);
        } else {
            result += c;
        }
    }
    return 0; 
}

int main() {
    assert(encrypt("a") == "e");
    return 0;
}