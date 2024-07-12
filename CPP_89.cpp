#include <string>
#include <cctype>
#include <cassert>

std::string encrypt(std::string s){
    std::string result = "";
    for(char c : s){
        if(std::isalpha(c)){
            char base = std::isupper(c) ? 'A' : 'a';
            result += (c - base + 2 * 2) % 26 + base;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert (encrypt("a") == "e");
    return 0;
}