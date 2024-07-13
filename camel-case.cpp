```cpp
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '-') {
            ++i;
            while (i < s.size() && s[i] == '-') {
                ++i;
            }
            if (i < s.size()) {
                result += toupper(s[i]);
            }
        } else if (i > 0 && s[i] == '-') {
            if (!result.empty()) {
                result.push_back(' ');
            }
            ++i;
            while (i < s.size() && s[i] == '-') {
                ++i;
            }
            if (i < s.size()) {
                result += toupper(s[i]);
            }
        } else if (!result.empty() && islower(s[i])) {
            result.push_back(tolower(s[i]));
            result[0] = toupper(result[0]);
        } else {
            result += s[i];
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