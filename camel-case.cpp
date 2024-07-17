#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    int i = 0;
    
    while (i < str.length()) {
        if (str[i] == '-') {
            i++;
            while (i < str.length() && str[i] != ' ') {
                result += toupper(str[i]);
                i++;
            }
            result += " ";
        } else if (str[i] == ' ') {
            i++;
        } else {
            if (!result.size()) {
                result = std::tolower(str[i], std::locale());
            } else {
                result += std::tolower(str[i], std::locale());
            }
            i++;
        }
    }    
    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::cin >> str;
        std::cout << "The camelCase equivalent is: " << camelCase(str) << std::endl;
    }
    return 0;
}