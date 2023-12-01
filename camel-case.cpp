#include <iostream>
#include <string>
#include <vector>

std::string kebabToCamelCase(const std::string& kebab) {
    std::string camel;
    bool capitalizeNext = false;
    
    for (int i = 0; i < kebab.size(); i++) {
        if (kebab[i] == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            camel += std::toupper(kebab[i]);
            capitalizeNext = false;
        } else {
            camel += kebab[i];
        }
    }
    
    return camel;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::vector<std::string> words;
    std::string word;
    
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += input[i];
        }
    }
    
    words.push_back(word);
    
    std::string camelCase;
    
    for (int i = 0; i < words.size(); i++) {
        camelCase += kebabToCamelCase(words[i]);
        if (i != words.size() - 1) {
            camelCase += " ";
        }
    }
    
    std::cout << camelCase << std::endl;
    
    return 0;
}