#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string encrypt(std::string s){
    std::string result = "";
    for(char c : s){
        if(std::isalpha(c)){
            char base = std::islower(c) ? 'a' : 'A';
            result += (char)(((c - base + 2 * 2) % 26) + base);
        }
        else{
            result += c;
        }
    }
    return result;
}