#include <iostream>
#include <string>
using namespace std;

std::string encrypt(std::string s);

std::string encrypt(std::string s){
    std::string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char newChar = c + 2 * 2;
            if(islower(c)){
                if(newChar > 'z'){
                    newChar = 'a' + (newChar - 'z' - 1);
                }
            } else {
                if(newChar > 'Z'){
                    newChar = 'A' + (newChar - 'Z' - 1);
                }
            }
            encrypted += newChar;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}