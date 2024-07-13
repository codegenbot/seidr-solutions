#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            if (!result.empty()) {
                if (capitalizeNext) {
                    result.push_back(toupper(result[0]));
                    capitalizeNext = false;
                }
            }
            capitalizeNext = true;
        } else {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
            }
        }
    }

    // Capitalize the first character of the last group
    if (!result.empty()) {
        if (capitalizeNext) {
            result[0] = toupper(result[0]);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "The camelCase conversion is: " << camelCase(input) << std::endl;
    return 0;
}