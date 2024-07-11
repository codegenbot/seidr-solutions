Here is the solution:

#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string &str) {
    if (str.empty()) return str;
    
    int i = 0;
    while (i < str.length() && str[i] != '-') {
        i++;
    }
    if (i == str.length()) return str;
    
    std::string result = str.substr(0, i);
    for (; i < str.length(); i++) {
        if (str[i] == '-') {
            i++;
            while (i < str.length() && str[i] != '-') {
                i++;
            }
            if (i < str.length()) {
                result += std::string(1, toupper(str[i]));
            }
        } else if (!isalnum(str[i])) {
            return str; // invalid input
        }
    }
    
    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl;
    std::cout << camelCase("two-words") << std::endl;
    std::cout << camelCase("two words") << std::endl;
    std::cout << camelCase("all separate words") << std::endl;
    return 0;
}