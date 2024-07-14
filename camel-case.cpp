#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;
    while (getline(ss, word, '-')) {
        words.push_back(word);
    }
    
    std::string result = "";
    for (int i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += ((char)toupper(words[i][0]));
        } else {
            result += words[i];
        }
        
        if (i != words.size() - 1) {
            result += " ";
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase version: " << kebabToCamel(input) << std::endl;
    
    return 0;
}