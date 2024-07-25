#include <string>
#include <cctype>

std::string encrypt(std::string s){
    std::string encrypted = "";
    for(char c : s){
        if(std::isalpha(c)){
            char base = std::isupper(c) ? 'A' : 'a';
            encrypted += static_cast<char>((((c - base + 2 * 2) % 26) + base));
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}