#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    s.erase(0, s.find_first_of('- ')); // Remove leading space or hyphen
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += char(toupper(c));
            }
            first = false;
        } else {
            if (first) {
                result += c;
            } else {
                result += tolower(c);
            }
            first = false;
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        s.erase(0, s.find_first_not_of(' ')); // Remove leading spaces
        std::cout << camelCase(s) << std::endl;
    }
    return 0;