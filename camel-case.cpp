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
            continue; 
        } else {
            if (first) {
                first = false;
            }
            if (c != '-') {
                result += toupper(c);
            } else {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Remove spaces
    for (auto &c : input) {
        if (c == ' ') c = '-';
    }

    std::cout << toCamelCase(input) << std::endl;
    return 0;
}