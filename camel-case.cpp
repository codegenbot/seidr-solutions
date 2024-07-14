#include <iostream>
#include <string>

std::string kebabToCamelCase(const std::string& s) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += char(std::toupper(c));
            capitalizeNext = false;
        } else {
            result += char(std::tolower(c));
        }
    }

    return result;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << kebabToCamelCase(s) << std::endl;
    return 0;
}