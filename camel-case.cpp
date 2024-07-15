#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first)
                result += char(toupper(c));
            else
                first = false;
        } else if (c == ' ') {
            if (!first)
                result += char(toupper(c));
            else
                first = false;
        } else {
            if (!first) {
                result += tolower(c);
            } else {
                result += c;
                first = false;
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;

    return 0;
}