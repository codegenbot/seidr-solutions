#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string s) {
    std::string result = "";
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += char(toupper(c));
            }
            first = false;
        } else if (c == ' ') {
            if (!first) {
                result += char(toupper(c));
            }
            first = true;
        } else {
            if (first) {
                result += c;
            } else {
                result += char(tolower(c));
            }
            first = false;
        }
    }

    return result;
}

int main() {
    bool first = true;
    std::string temp;

    while (std::cin >> temp, !std::cin.fail()) {
        if (!first) {
            std::cout << " ";
        } else {
            first = false;
        }
        for (char c : temp) {
            if (c == '-') break;
            if (first) {
                std::cout << toupper(c);
            } else {
                std::cout << tolower(c);
            }
        }
    }

    std::cout << "\nProcessing: " << temp << std::endl;
    std::cout << camelCase(temp) << std::endl;

    return 0;