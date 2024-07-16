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
                result = tolower(std::string(1, str[i]));
            } else {
                result += tolower(std::string(1, str[i]));
            }
            i++;
        }
    }
    
    return result.substr(0, result.find(' '));
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