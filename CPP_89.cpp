#include <string>

std::string encrypt(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            c = ('a' + (c - 'a' + 4 * 2) % 26);
        } else if (c >= 'A' && c <= 'Z') {
            c = ('A' + (c - 'A' + 4 * 2) % 26);
        }
        result += c;
    }
    return result;