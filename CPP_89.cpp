#include <iostream>
#include <string>

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            c = (c - 'a' + 3) % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            c = (c - 'A' + 3) % 26 + 'A';
        }
        result += c;
    }
    return result;
}

int main() {
    assert(encrypt("a") == "d");
    return 0;
}