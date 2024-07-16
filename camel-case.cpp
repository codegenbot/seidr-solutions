#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::vector<std::string> words = split(input, " ");
    std::string result;
    
    for (const auto& word : words) {
        if (!result.empty()) {
            result += char(std::toupper(word[0]));
        } else {
            result += word;
        }
        
        for (int i = 1; i < word.size(); ++i) {
            result += std::tolower(word[i]);
        }
    }
    
    return result;
}

std::vector<std::string> split(const std::string& input, const std::string& delimiter) {
    std::vector<std::string> words;
    size_t pos = 0;
    
    while ((pos = input.find(delimiter)) != std::string::npos) {
        words.push_back(input.substr(0, pos));
        input.erase(0, pos + delimiter.size());
    }
    
    if (!input.empty()) {
        words.push_back(input);
    }
    
    return words;
}

int main() {
    // Test cases
    std::cout << camelCase("nospaceordash") << std::endl;  // nospaceordash
    std::cout << camelCase("two-words") << std::endl;      // twoWords
    std::cout << camelCase("two words") << std::endl;       // two words
    std::cout << camelCase("all separate words") << std::endl;  // all separate words
    
    return 0;
}