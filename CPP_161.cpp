#include <string>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper((unsigned char)c) : tolower((unsigned char)c);
        } else {
            result += c;
        }
    }
    return result;
}