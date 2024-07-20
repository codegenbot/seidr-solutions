#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNextWord = true;
    
    for (char c : s) {
        if (c == '-') {
            capitalizeNextWord = true;
        } else {
            if (capitalizeNextWord) {
                result += toupper(c);
                capitalizeNextWord = false;
            } else {
                result += tolower(c);
            }
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "camelCase: " << camelCase(input) << std::endl;
    return 0;
}