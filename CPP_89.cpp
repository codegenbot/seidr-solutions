#include <iostream>
#include <string>
#include <cassert>

std::string encrypt(std::string s){
    std::string result = "";
    for(char c : s){
        if(isalpha(c)){
            char base = isupper(c) ? 'A' : 'a';
            result += (char)((c - base + 2 * 2) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(encrypt("a") == "e");
    return 0;
}