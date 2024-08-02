#include <iostream>
#include <string>

std::string kebabToCamel(std::string str) {
    std::string result;
    for (char c : str) {
        if (c == '-') {
            result += c + char(toupper(str.find(c) + 1));
        } else if (c == ' ') {
            continue;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << kebabToCamel(input) << '\n';
    }
    return 0;
}