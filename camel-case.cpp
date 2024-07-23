#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::vector<std::string> words;
    std::string word;
    
    for (char c : input) {
        if (c == '-') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else if (c == ' ') {
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

    std::string result = words[0];
    for (int i = 1; i < words.size(); ++i) {
        result += std::string(1, char(toupper(words[i][0])));
        result += words[i].substr(1);
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "CamelCase: " << camelCase(input) << std::endl;
    return 0;
}