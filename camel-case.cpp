#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            // Skip the dash and the following space
            continue;
        }
        if (c == ' ') {
            // Start a new word in camelCase
            result[0] += topper(c);
            return result + kebabToCamel((str.substr(str.find(c) + 1)));
        }
        result += topper(c);
    }
    return result;
}

char topper(char c) {
    if (c >= 'a' && c <= 'z') {
        // Convert lowercase letters to uppercase
        return c - ('a' - 'A');
    } else {
        // Leave other characters as they are
        return c;
    }
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}