#include <vector>
#include <iostream>
#include <string>

std::string toCamelCase(const std::string& s) {
    std::string result;
    if (!s.empty()) {
        int i = 0;
        while (i <= s.size()) {
            if (s[i] == '-' || s[i] == ' ') {
                if (result.back() != '-') {
                    if (i > 0) {
                        result += toupper(s[i]);
                    } else {
                        result += s[i];
                    }
                }
                i += (s[i] == ' ');
            } else {
                result += tolower(s[i]);
                i++;
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    std::cout << "Camel case: " << toCamelCase(input) << std::endl;

    return 0;
}