#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    
    for (char c : str) {
        if (c == '-') {
            result += (firstWord)? toupper(str[str.find(c)+1]) : char(toupper((int)c));
            firstWord = false;
        } else if (c == ' ') {
            result += toupper(c);
            firstWord = true;
        } else {
            result += c;
        }
    }
    
    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::cin >> str;
        if (!str.size())
            break;
        std::cout << "The camelCase equivalent is: " << camelCase(str) << std::endl;
    }
    return 0;
}