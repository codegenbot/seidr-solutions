#include <iostream>
#include <string>
#include <cassert>

std::string encrypt(std::string s){
    std::string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char base = islower(c) ? 'a' : 'A';
            encrypted += (c - base + 2 * 2) % 26 + base;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

int main() {
    assert(encrypt("a") == "e");
    return 0;
}