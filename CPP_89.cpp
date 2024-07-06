#include <string>
#include <cassert>

bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}

bool isUpper(char c) {
    return c >= 'A' && c <= 'Z';
}

std::string encrypt(std::string s) {
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(isLower(c)) {
            c = (c - 'a' + 3) % 26 + 'a';
        } else if(isUpper(c)) {
            c = (c - 'A' + 3) % 26 + 'A';
        }
        result += c;
    }
    return result;
}

int main() {
    std::string s;
    assert(encrypt("Hello World!").compare("Khoor Zruog!") == 0);
    return 0;
}