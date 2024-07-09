#include <string>
#include <iostream>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-' || c == ' ') { 
            capitalize = true; 
        } else if (capitalize) {
            if (!result.empty()) {
                result += toupper(c);
            } else {
                result += tolower(c); // Make sure the first char is lowercase
            }
            capitalize = false; 
        } else {
            result += tolower(c);
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