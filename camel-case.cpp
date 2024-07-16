#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    
    for (char c : str) {
        if (c == '-') {
            if (!firstWord) {
                result += char(toupper(c));
            }
            else {
                firstWord = false;
            }
        } 
        else if (c == ' ') {
            if (!firstWord) {
                result += char(toupper(c));
            }
            else {
                firstWord = false;
            }
        } 
        else {
            if (firstWord) {
                result += c;
            } 
            else {
                result += char(tolower(c));
            }
        }
    }
    
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << camelCase(str) << std::endl;
    return 0;
}