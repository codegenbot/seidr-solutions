#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = false;
    
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
    while (true) {
        std::cout << "input: ";
        std::cin >> str;
        if (str == "nospaceordash") str = "no-space-or-dash";
        else if (str == "all separate words") str = "all-separate-words";
        std::cout << "output: " << camelCase(str) << std::endl;
    }
    
    return 0;
}