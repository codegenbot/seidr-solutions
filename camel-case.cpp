#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    if (str.empty()) return str;

    std::string result;
    std::string temp = "";
    
    for (char c : str) {
        if (c == '-') {
            result += toupper(temp[0]);
            temp = "";
        } else {
            temp += c;
        }
    }
    result += tolower(temp[0]) + temp.substr(1);
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "The camelCase representation is: " << kebabToCamel(input) << std::endl;

    return 0;
}