#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words = split(str, " ");
    std::string result;
    
    for (const auto& word : words) {
        if (!result.empty()) {
            result += std::uppercase(word.substr(1));
        } else {
            result += std::uppercase(word);
        }
    }
    
    return result;
}

std::vector<std::string> split(const std::string& str, const char* delimiter) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    std::string token;

    while ((pos = str.find(delimiter)) != std::string::npos) {
        token = str.substr(0, pos);
        tokens.push_back(token);
        str.erase(0, pos + strlen(delimiter));
    }
    
    tokens.push_back(str);
    
    return tokens;
}

int main() {
    std::cout << kebabToCamel("nospaceordash") << std::endl; // nospaceordash
    std::cout << kebabToCamel("two-words") << std::endl; // twoWords
    std::cout << kebabToCamel("two words") << std::endl; // two words
    std::cout << kebabToCamel("all separate words") << std::endl; // all separate words
    
    return 0;
}