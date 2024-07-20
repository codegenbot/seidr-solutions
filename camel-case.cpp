#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool first = true;

    for (char c : str) {
        if (c == '-') {
            first = false;
        } else if (!first) {
            result[0] = toupper(c);
            result += "!";
            first = true;
        } else {
            result += tolower(c);
        }
    }

    return result.substr(1);
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << kebabToCamel(str) << '\n';
    }
    return 0;
}