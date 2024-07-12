#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string str) {
    std::istringstream iss(str);
    std::string word;
    std::string result = "";
    
    while (iss >> word) {
        if (!result.empty()) {
            result += toupper(word[0]);
            word = tolower(substr(word, 1));
        } else {
            result += word;
        }
    }
    
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, str);
    std::cout << "camelCase: " << camelCase(str) << std::endl;
    return 0;
}