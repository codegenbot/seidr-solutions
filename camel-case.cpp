```c++
#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            while (++i && i < s.size() && s[i] == '-') {}
            result += toupper(s[i-1]);
        } else if (!result.empty() && !std::isalpha(s[i])) {
            result += ' ';
            result += s[i];
        } else if (std::isalpha(s[i])) {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::getline(std::cin, input);
        std::cout << "camelCase: " << camelCase(input) << std::endl;
    }
    return 0;
}