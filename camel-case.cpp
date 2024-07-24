#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;
    
    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            if (isupper(c)) {
                result += c;
                capitalizeNext = true;
            } else {
                result += tolower(c);
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