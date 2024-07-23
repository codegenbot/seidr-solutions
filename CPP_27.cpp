#include <iostream>
#include <string>

std::string flip_case(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? topper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result;
}

std::string topper(char c) { return std::string(1, static_cast<char>(c - 32)); }