#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            result += toupper(s[s.find(c) + 1]);
            s.erase(s.find(c), 1);
        } else if (c == ' ') {
            if (!first) {
                result[0] = toupper(result[0]);
            }
            first = false;
            result += s;
            break;
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
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;

    return 0;
}