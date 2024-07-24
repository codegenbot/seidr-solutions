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
            result += (char)(c + 32); // convert to lowercase
            first = true;
        } else {
            result += c;
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << kebabToCamel(str) << '\n';
    }
    return 0;
}