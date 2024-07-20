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
        } else if (c != ' ') {
            if (first) {
                first = false;
            }
            result += toupper(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    for (auto &c : input) {
        if (c == ' ') c = '-';
    }

    std::cout << toCamelCase(input) << std::endl;
    return 0;