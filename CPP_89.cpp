#include <iostream>
#include <string>
#include <cassert>

std::string encrypt(const std::string& s){
    std::string encrypted = "";
    for(char c : s){
        if(std::isalpha(c)){
            char base = std::islower(c) ? 'a' : 'A';
            encrypted += (c - base + 4) % 26 + base;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

int main(){
    assert(encrypt("a") == "e");
    return 0;
}