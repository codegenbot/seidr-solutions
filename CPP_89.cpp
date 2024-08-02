#include <iostream>
#include <string>

int encrypt(std::string s) {
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'm'){
            result += (char)(c + 4);
        } else if(c >= 'n' && c <= 'z'){
            int asciiValue = (int)c - 22;
            if(asciiValue < 97){
                for(int j=26; j > 0; j--){
                    if((j-1) % 26 == (asciiValue+97-122)%26){
                        result += (char)(j + 96);
                        break;
                    }
                }
            } else {
                result += (char)(c - 22);
            }
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