Here is the solution:

#include <iostream>
#include <string>

std::string kebabToCamel(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;
    
    for (char c : s) {
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
    std::string s;
    std::cin >> s;
    std::cout << kebabToCamel(s) << std::endl;
    return 0;
}