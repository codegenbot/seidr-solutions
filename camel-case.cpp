#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamelCase(const std::string& input) {
    std::string result = "";
    size_t pos = 0;
    
    while ((pos = input.find('-')) != std::string::npos) {
        std::string word = input.substr(0, pos);
        if (!result.empty()) {
            result += std::toupper(word[0]);
            result.erase(0, 1);
        } else {
            result += word;
        }
        
        size_t nextPos = input.find(' ', pos);
        if (nextPos == std::string::npos) {
            result += input.substr(pos + 1);
            break;
        }
        
        input = input.substr(nextPos + 1);
    }
    
    if (!result.empty()) {
        for (size_t i = 0; i < result.size(); ++i) {
            if (std::isupper(result[i])) {
                result[0] = std::tolower(result[0]);
                break;
            }
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << kebabToCamelCase(input) << std::endl;
    return 0;
}