#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (std::isspace(c)) { 
            capitalize = true;  
            continue;          
        } else if (c == '-') { 
            result += c;
            capitalize = true;  
        } else {
            if (capitalize) {
                result += std::toupper(c);  // capitalize the first letter of this word
                capitalize = false;         // don't capitalize next letters in this word
            } else {
                result += std::tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;

    std::cout << camelCase(input) << std::endl;

    return 0;
}