#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string &input) {
    std::vector<std::string> words = split(input, ' ');
    std::string result;
    
    for (int i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += std::toupper(words[i][0]);
        } else {
            result += words[i];
        }
        
        if (i < words.size() - 1) {
            result += " ";
        }
    }
    
    return result;
}

std::vector<std::string> split(const std::string &str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    for (const auto &c : str) {
        if (c == delimiter) {
            tokens.push_back(token);
            token = "";
        } else {
            token += c;
        }
    }
    
    if (!token.empty()) {
        tokens.push_back(token);
    }
    
    return tokens;
}

int main() {
    std::cout << camelCase("camel-case example-test-string") << std::endl;
    std::cout << camelCase("nospaceordash") << std::endl;
    std::cout << camelCase("two-words") << std::endl;
    std::cout << camelCase("two words") << std::endl;
    std::cout << camelCase("all separate words") << std::endl;
    
    return 0;
}