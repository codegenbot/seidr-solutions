```cpp
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                i++;
            }
            if (!result.empty()) {
                result += char(toupper(s[i]));
            } else {
                result += s[i];
            }
        } else {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += s[i];
        }
        i++;
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase version: " << camelCase(input) << std::endl;
    return 0;
}