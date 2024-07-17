#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamelCase(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            result += toUpper(c + 1);
        } else if (c != ' ') {
            result += c;
        }
    }
    return result;
}

std::string toUpper(int i) {
    char c = static_cast<char>(i);
    return std::string(1, c);
}