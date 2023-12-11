#include <iostream>
#include <string>
#include <vector>

std::string camelCase(const std::string& input) {
    std::string result;
    std::vector<std::string> words;
    std::string word;
    
    for (char c : input) {
        if (c == '-') {
            words.push_back(word);
            word.clear();
        } else {
            word += c;
        }
    }
    words.push_back(word);
    
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += words[i][0] - 'a' + 'A';
            result += words[i].substr(1);
        } else {
            result += words[i];
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::string output = camelCase(input);
    std::cout << output << std::endl;
    
    return 0;
}