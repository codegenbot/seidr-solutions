#include <string>

std::string encrypt(std::string s);

std::string encrypt(std::string s){
    std::string encrypted = "";
    for(char c : s){
        if(std::isalpha(c)){
            char base = std::islower(c) ? 'a' : 'A';
            char new_char = base + (c - base + 2 * 2) % 26;
            encrypted += new_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}