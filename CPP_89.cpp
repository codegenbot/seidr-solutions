#include <iostream>
#include <string>
using namespace std;

string encrypt(string s);

int main() {
    assert(encrypt("a") == "e");
    return 0;
}

string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char encryptedChar = c + 4;
            if(islower(c)){
                if(encryptedChar > 'z'){
                    encryptedChar = 'a' + (encryptedChar - 'z' - 1);
                }
            } else {
                if(encryptedChar > 'Z'){
                    encryptedChar = 'A' + (encryptedChar - 'Z' - 1);
                }
            }
            encrypted += encryptedChar;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}