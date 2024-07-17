#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++;
            while (i < str.length() && str[i] == '-') {
                i++;
            }
            if (i < str.length()) {
                result += toupper(str[i]);
            }
        } else if (str[i] != ' ') {
            if (result.length() > 0) {
                result[0] = tolower(result[0]);
            }
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string in kebab-case, or 'q' to quit: ";
        std::cin >> input;
        if (input == "q") break;
        std::cout << "camelCase: " << camelCase(input) << std::endl;
    }
    return 0;
}