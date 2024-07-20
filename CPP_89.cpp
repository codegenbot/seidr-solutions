#include <string>
#include <cctype>

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (std::isalpha(c)) {
            char encrypted = (c - 'a' + 2 * 2) % 26 + 'a';
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}