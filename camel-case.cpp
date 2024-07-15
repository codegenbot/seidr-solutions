#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == '-') {
            if (result.length() > 0) {
                result[0] = toupper(str[i]);
            } else {
                result += str[i];
            }
        } else if (str[i] != '-') {
            if (!result.empty()) {
                result[0] = tolower(str[i]);
            } else {
                result += tolower(str[i]);
            }
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> str;
    std::cout << "The camelCase representation is: " << camelCase(str) << std::endl;
    return 0;
}