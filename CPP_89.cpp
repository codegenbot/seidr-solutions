#include <string>
#include <cctype>

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (std::isalpha(c)) {
            char encrypted = 'a' + (c - 'a' + 2 * 2) % 26;
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}