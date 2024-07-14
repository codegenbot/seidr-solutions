#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c == '-') {
            result += char(std::toupper(str.find(c) + 1));
        } else if (c == ' ') {
            result += char(std::toupper(result.size()));
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}