#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            first = false;
        } else if (!first) {
            result[0] = toupper(c);
            result += c;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        try {
            std::cout << camelCase(s) << '\n';
        } catch (...) {
            std::cerr << "Invalid input. Please provide a string in kebab-case.\n";
            return 1;
        }
    }
    return 0;
}