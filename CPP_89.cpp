#include <iostream>
#include <string>
#include <cctype>

std::string encrypt(std::string s) {
    std::string encrypted = "";
    for(char c : s){
        if(std::isalpha(c)){
            char base = std::islower(c) ? 'a' : 'A';
            char encrypted_char = base + (c - base + 2 * 2) % 26;
            encrypted += encrypted_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

int main() {
    assert (encrypt("a")=="e");
    return 0;
}