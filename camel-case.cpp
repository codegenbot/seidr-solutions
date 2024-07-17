#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words = split(str, "-");
    std::string result;
    
    for (int i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += toupper(words[i][0]);
            for (int j = 1; j < words[i].size(); ++j) {
                result += tolower(words[i][j]);
            }
        } else {
            result += words[i];
        }
        
        if (i < words.size() - 1) {
            result += " ";
        }
    }
    
    return result;
}

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(str);
    
    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    
    return tokens;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl;
    std::cout << camelCase("two-words") << std::endl;
    std::cout << camelCase("two words") << std::endl;
    std::cout << camelCase("all separate words") << std::endl;
    
    return 0;
}