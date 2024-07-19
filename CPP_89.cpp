#include <string>
#include <cctype>
#include <cassert>

std::string encrypt(std::string s){
    std::string encrypted = "";
    for(char c : s){
        if(std::isalpha(c)){
            char new_char = c + 2 * (c - 'a' + 1);
            if(std::islower(c)){
                if(new_char > 'z'){
                    new_char = 'a' + (new_char - 'z' - 1);
                }
            } else {
                if(new_char > 'Z'){
                    new_char = 'A' + (new_char - 'Z' - 1);
                }
            }
            encrypted += new_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}