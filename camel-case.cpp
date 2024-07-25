#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++; // skip the '-'
            while (i < str.length() && str[i] == ' ') {
                i++; // skip the spaces
            }
            if (result != "") {
                result += std::string(1, toupper(str[i]));
            } else {
                result = std::string(1, tolower(str[i]));
            }
        } else if (str[i] == ' ') {
            continue; // skip the space
        } else {
            if (result != "") {
                result += std::string(1, toupper(str[i]));
            } else {
                result = std::string(1, tolower(str[i]));
            }
        }
    }
    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl;
    std::cout << camelCase("two-words") << std::endl;
    std::cout << camelCase("two words") << std::endl;
    std::cout << camelCase("all separate words") << std::endl;
    return 0;
}