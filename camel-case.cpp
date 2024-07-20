#include <iostream>
#include <string>

std::string toCamelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += char(toupper(c));
            } else {
                first = false;
            }
        } else if (c == ' ') {
            if (!first) {
                result += char(toupper(c));
            } else {
                first = false;
            }
        } else {
            if (first) {
                first = false;
            }
            result += c;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << toCamelCase(input) << std::endl;
    return 0;
}