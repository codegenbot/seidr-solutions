#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool first = true;

    for (char c : str) {
        if (c == '-') {
            result += ((first) ? "" : std::toupper(c));
            first = false;
        } else {
            if (!first) {
                result += std::toupper(c);
                first = true;
            } else {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << kebabToCamel(input) << std::endl;

    return 0;
}