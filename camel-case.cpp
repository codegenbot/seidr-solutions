#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == '-') {
            if (i > 0 && result.empty()) continue;
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            size_t j = i + 1;
            while (j <= str.length() && str[j] != '-' && str[j] != ' ') {
                result += tolower(str[j++]);
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