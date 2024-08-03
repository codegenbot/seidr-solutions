#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool first = true;

    for (char c : str) {
        if (c == '-') {
            if (!first) {
                result[0] = toupper(result[0]);
            }
            result += " ";
            first = false;
        } else if (c == ' ') {
            first = true;
        } else {
            if (!first) {
                result[0] = tolower(c);
            } else {
                result += c;
            }
            first = false;
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}