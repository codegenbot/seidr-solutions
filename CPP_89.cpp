#include <iostream>
#include <string>
#include <cassert>

std::string encrypt(std::string s){
    std::string result = "";
    for(char c : s){
        if(std::isalpha(c)){
            char encrypted = c + 4;
            if(std::islower(c) && encrypted > 'z'){
                encrypted = 'a' + (encrypted - 'z' - 1);
            }
            else if(std::isupper(c) && encrypted > 'Z'){
                encrypted = 'A' + (encrypted - 'Z' - 1);
            }
            result += encrypted;
        }
        else{
            result += c;
        }
    }
    return result;
}

int main(){
    assert (encrypt("a")=="e");
    return 0;
}