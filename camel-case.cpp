#include <iostream>
#include <string>
#include <vector>

std::string kebabToCamel(const std::string& kebabCase) {
    std::string camelCase;
    bool capitalizeNext = false;
    
    for (char c : kebabCase) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            camelCase += std::toupper(c);
            capitalizeNext = false;
        } else {
            camelCase += c;
        }
    }
    
    return camelCase;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::vector<std::string> words;
    std::string word;
    
    for (char c : input) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    }
    
    std::string output;
    
    for (const std::string& word : words) {
        output += kebabToCamel(word) + " ";
    }
    
    output.pop_back(); // Remove the trailing space
    
    std::cout << output << std::endl;
    
    return 0;
}