Here is the completed code:

#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNextLetter = true;
    
    for (char c : s) {
        if (c == '-') {
            capitalizeNextLetter = true;
        } else if (capitalizeNextLetter) {
            result += toupper(c);
            capitalizeNextLetter = false;
        } else {
            result += tolower(c);
        }
    }
    
    return result;
}

int main() {
    std::string s;
    while(std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}