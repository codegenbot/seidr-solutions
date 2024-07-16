#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;
    
    while (ss >> word) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }
    
    std::string result = "";
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            result += std::toupper(words[i][0]);
            result.erase(0, 1);
        } else {
            result += words[i];
        }
        
        if (i < words.size() - 1) {
            result += " ";
        }
    }
    
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}