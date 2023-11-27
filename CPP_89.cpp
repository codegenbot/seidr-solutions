#include <iostream>
#include <string>
#include <cassert>

std::string encrypt(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            char encryptedChar = (s[i] - 'a' + 2 * 2) % 26 + 'a';
            result += encryptedChar;
        } else {
            result += s[i];
        }
    }
    return result;
}

int main() {
    assert (encrypt("a") == "e");
    // Add more test cases if needed
    return 0;
}