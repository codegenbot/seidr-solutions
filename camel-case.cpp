#include <string>
#include <cstddef> 
#include <cctype>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            if(capitalizeNext) result += std::toupper(c);
            capitalizeNext = true;
            result.push_back(' ');
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    size_t pos = result.find(' ');
    while (pos != std::string::npos) {
        result.erase(pos, 1);
        pos = result.find(' ');
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a kebab-case string: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase output: " << camelCase(input) << std::endl;
    return 0;
}