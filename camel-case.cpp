```cpp
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;
    bool wordStarted = false;

    for (char c : str) {
        if (c == '-' || c == ' ') { 
            capitalize = true;
            wordStarted = false;
        } else if (!wordStarted) {
            if (capitalize && islower(c)) { 
                result += toupper(c);
                capitalize = false;
            } else {
                result += c;
            }
            wordStarted = true;
        } else {
            if (capitalize) {
                result += toupper(c);
                capitalize = false;
            } else {
                result += tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string userInput;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, userInput);
    
    std::string result = camelCase(userInput);  

    std::cout << "camelCase: " << result << "\n";
    return 0;
}