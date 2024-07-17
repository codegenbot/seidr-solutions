#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    if (s.empty()) return s;
    std::string result = "";
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += char(toupper(c));
            } else {
                first = false;
            }
        } else if (c == ' ') {
            if (!first) {
                result += char(toupper(c));
            } else {
                first = false;
            }
        } else {
            if (first) {
                result += tolower(c);
                first = false;
            } else {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::cout << "camelCase: " << camelCase(s) << std::endl;
    return 0;
}