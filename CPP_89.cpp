#include <iostream>
#include <string>
#include <cctype>

std::string encrypt(std::string s){
    std::string result = "";
    int shift = 2 * 2;
    for(char c : s){
        if(std::isalpha(c)){
            char encrypted = c + shift;
            if(std::islower(c)){
                if(encrypted > 'z'){
                    encrypted = 'a' + (encrypted - 'z' - 1);
                }
            } else {
                if(encrypted > 'Z'){
                    encrypted = 'A' + (encrypted - 'Z' - 1);
                }
            }
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}

int main(){
    assert (encrypt("a")=="e");
    // Add more test cases here
    return 0;
}