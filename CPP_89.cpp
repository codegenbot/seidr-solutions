#include <string>
#include <cctype>

std::string encrypt(const std::string& s){
    std::string result = "";
    for(char c : s){
        if(std::isalpha(c)){
            char encrypted = 'a' + (c - 'a' + 4) % 26;
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}