#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    if (str.empty()) return str;
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) result += char(std::toupper(result[0]));
            result.erase(0, 1);
        } else if (c == ' ') {
            if (!result.empty()) result += char(std::toupper(result[0]));
            result.erase(0, 1);
        } else {
            result += c;
        }
    }
    return std::string(result).empty() ? str : std::string(char(std::toupper(result[0]))) + result.substr(1);
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl; // nospaceordash
    std::cout << camelCase("two-words") << std::endl; // twoWords
    std::cout << camelCase("two words") << std::endl; // two words
    std::cout << camelCase("all separate words") << std::endl; // all separate words
    return 0;
}