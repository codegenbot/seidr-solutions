#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.size(); i++) {
        if (i == str.size() || str[i] == '-') {
            if (result.empty()) {
                continue;
            }
            result[0] = toupper(result[0]);
            break;
        } else if (str[i] == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += " ";
        } else {
            result += str[i];
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