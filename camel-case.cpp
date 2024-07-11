#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result;
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || (s[i] == '-' && i > 0 && s[i-1] != ' ')) {
            if (result.empty()) {
                // capitalize the first letter of the result
                result += toupper(s[i+1]);
            } else {
                // capitalize the rest of the letters
                result += tolower(s[i+1]);
            }
        } else if (s[i] == '-') {
            continue;
        } else {
            // add the character as is
            result += s[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::cin >> input;
        std::cout << "CamelCase version of the string is: " << camelCase(input) << std::endl;
    }
    return 0;
}