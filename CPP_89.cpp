#include <string>
#include <cctype>

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (std::isalpha(c)) {
            char base = std::islower(c) ? 'a' : 'A';
            result += (c - base + 4) % 26 + base;
        } else {
            result += c;
        }
    }
    return result;
}