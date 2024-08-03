#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result = "";
    size_t start = 0;
    
    while (start < s.length()) {
        size_t end = s.find('-');
        if (end == std::string::npos) {
            result += toupper(s[start]);
            break;
        }
        
        size_t wordLen = end - start;
        result += toupper(s.substr(start, 1));
        
        for (size_t i = 1; i < wordLen; ++i) {
            result += tolower(s[start + i]);
        }
        
        start = end + 1;
    }
    
    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << kebabToCamel(input) << std::endl;
    return 0;
}