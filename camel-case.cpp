#include <iostream>
#include <string>

std::string toCamelCase(std::string str) {
    std::vector<std::string> words = split(str, " ");
    std::string result;
    
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            result += std::toupper(words[i][0]);
            if (words[i].size() > 1)
                result += words[i].substr(1);
        } else
            result += words[i];
    }
    
    return result;
}

std::string split(const std::string& str, const std::string& by) {
    size_t pos = 0;
    size_t prevPos = 0;
    std::vector<std::string> tokens;
    
    while ((pos = str.find(by, prevPos)) != std::string::npos) {
        tokens.push_back(str.substr(prevPos, pos - prevPos));
        prevPos = pos + by.size();
    }
    
    tokens.push_back(str.substr(prevPos));
    
    return std::join(tokens, " ");
}

int main() {
    std::cout << toCamelCase("nospaceordash") << std::endl;
    std::cout << toCamelCase("two-words") << std::endl;
    std::cout << toCamelCase("two words") << std::endl;
    std::cout << toCamelCase("all separate words") << std::endl;
    return 0;
}