#include <iostream>
#include <string>

std::string toCamelCase(const std::string& str) {
    std::string result;
    int i = 0;

    while (i < str.length()) {
        if (str[i] == '-') {
            i++; // skip the '-'
            while (i < str.length() && str[i] != ' ') {
                i++;
            }
        } else if (!result.empty()) { // capitalize the first letter
            result[0] = toupper(str[i]);
            i++;
        } else {
            result += tolower(str[i]);
            i++;
        }
    }

    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string in kebab-case (or 'quit' to stop): ";
        std::cin >> input;

        if (input == "quit")
            break;

        std::cout << toCamelCase(input) << std::endl;
    }

    return 0;
}