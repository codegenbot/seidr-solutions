#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool capitalize = false;

    for (char c : s) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += std::toupper(c);
            capitalize = false;
            result += ' ';
        } else {
            result += c;
        }
    }

    return result.substr(1); // Remove leading space
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << kebabToCamel(input) << std::endl;

    return 0;
}