#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool first = true;

    for (char c : str) {
        if (c == '-') {
            if (!first) {
                result += char(toupper(c));
            } else {
                first = false;
            }
        } else if (c == ' ') {
            continue;
        } else {
            if (!first) {
                result += char(toupper(c));
            } else {
                first = false;
                result += c;
            }
        }
    }

    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, str);
    std::cout << "camelCase: " << camelCase(str) << std::endl;
    return 0;
}