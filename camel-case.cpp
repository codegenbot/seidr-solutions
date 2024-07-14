#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool first = true;

    for (char c : str) {
        if (c == '-') {
            if (!first) {
                result[0] -= 32; // Convert to uppercase
            }
            result += c + 1;
            first = false;
        } else {
            if (!first) {
                result[0] -= 32; // Convert to uppercase
            }
            result += c;
            first = true;
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::cout << "input: ") {
        std::getline(std::cin, str);
        std::cout << "output: " << kebabToCamel(str) << std::endl;
    }
    return 0;
}