#include <iostream>
#include <string>
#include <sstream>

std::string result;

std::string camelCase() {
    bool first = true;
    for (char c : result) {
        if (c == '-') {
            if (!first) {
                std::cout << char(toupper(c));
            }
            first = false;
        } else {
            if (first) {
                std::cout << toupper(c);
            } else {
                std::cout << tolower(c);
            }
            first = false;
        }
    }
}

int main() {
    result = "";
    bool first = true;

    while (std::getline(std::cin, result, '-')) {
        if (!first) result += " ";
        else first = false;
        for (char c : result) {
            if (c == '-') break;
            if (first) std::cout << toupper(c);
            else std::cout << tolower(c);
        }
    }
    camelCase();
    std::cout << std::endl;
}