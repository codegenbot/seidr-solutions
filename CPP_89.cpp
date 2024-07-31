#include <string>
#include <cctype>
#include <iostream>

std::string encrypt(std::string s){
    std::string result = "";
    for(char& c : s){
        if(std::isalpha(c)){
            char encrypted = c + 4;
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
    // Test cases
    if(encrypt("a") == "e") {
        std::cout << "Test case passed!" << std::endl;
    } else {
        std::cout << "Test case failed!" << std::endl;
    }

    return 0;
}