```
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
            result += tolower(c);
        }
    }
    
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        if (str.find('-') == std::string::npos) {
            std::cout << "Program did not receive expected input.\n";
            break;
        } else {
            std::cout << camelCase(str) << std::endl;
        }
    }
    return 0;
}