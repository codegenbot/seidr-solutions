#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result[0] -= 32; // convert to uppercase
            }
            result += " ";
        } else if (c == ' ') {
            if (!first) {
                result[0] -= 32; // convert to uppercase
            }
            result += " ";
        } else {
            if (first) {
                first = false;
                result += c;
            } else {
                result += toupper(c); // convert to uppercase
            }
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << kebabToCamel(s) << std::endl;
    }
    return 0;
}