#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
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
    while (std::getline(std::cin, str)) { 
        str.erase(0, str.find_first_of(" ") + 1); 
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}