#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    if (s.empty()) return "";

    std::string result;
    for (char c : s) {
        if (c == '-') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += " ";
        } else if (c != ' ') {
            if (result.empty()) {
                result.push_back(tolower(c));
            } else {
                result += toupper(c);
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;

    return 0;
}