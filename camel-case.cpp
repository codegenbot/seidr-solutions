#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == '-') {
            if (result.empty()) {
                // first word, capitalize
                result += toupper(str.substr(i));
            } else {
                // subsequent words, capitalize the first letter and add to result
                result += toupper(str[i]);
            }
        } else if (str[i] != ' ') {
            // add lowercase letters to result
            result += tolower(str[i]);
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> str;
    std::cout << "camelCase: " << camelCase(str) << std::endl;
    return 0;
}