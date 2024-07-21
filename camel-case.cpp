#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    size_t start = 0;
    
    while (start < s.length()) {
        size_t end = s.find('-');
        
        if (end == std::string::npos)
            break;
        
        result += s.substr(start, end - start);
        result[0] = toupper(result[0]);
        start = end + 1;
    }
    
    // Convert the last group to camel case
    if (!result.empty()) {
        size_t end2 = s.find(' ', start);
        if (end2 == std::string::npos)
            result += s.substr(start);
        else {
            result += s.substr(start, end2 - start);
            start = end2 + 1;
        }
        
        // Convert to camel case
        result[0] = toupper(result[0]);
    } else {
        result = s.substr(start);
        result[0] = toupper(result[0]);
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter the kebab-case string: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase output: " << kebabToCamel(input) << std::endl;
    
    return 0;
}