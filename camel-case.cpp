#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result = "";
    size_t start = 0;
    
    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == '-') {
            if (start < i) {
                result += toupper(s.substr(start, i - start));
            }
            start = i + 1;
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase: " << kebabToCamel(input) << std::endl;
    
    return 0;
}