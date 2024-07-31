#include <string>
#include <cassert>

std::string encrypt(std::string s){
    std::string encrypted = "";
    for(char c : s){
        if(std::isalpha(c)){
            char encryptedChar = c + 2 * ('z' - c) + 2;
            if(std::isupper(c)){
                if(encryptedChar > 'Z'){
                    encryptedChar = 'A' + (encryptedChar - 'Z' - 1);
                }
            } else {
                if(encryptedChar > 'z'){
                    encryptedChar = 'a' + (encryptedChar - 'z' - 1);
                }
            }
            encrypted += encryptedChar;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

int main() {
    assert(encrypt("a") == "e");
    return 0;
}