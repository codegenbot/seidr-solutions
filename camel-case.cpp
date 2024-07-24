#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool firstWord = true;
    
    for (char c : s) {
        if (c == '-') {
            if (!firstWord)
                result += char(toupper(c));
            else
                firstWord = false;
        } else if (c == ' ') {
            if (!firstWord)
                result += char(toupper(c));
            else
                firstWord = false;
        } else {
            result += c;
            firstWord = false;
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    std::cout << "Camel case conversion: " << camelCase(input) << "\n";
    return 0;
}