#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;

    while (ss >> word) {
        words.push_back(word);
    }

    for(int i = 0; i < words.size(); i++) {
        if(i > 0)
            words[i][0] = std::toupper(words[i][0]);
    }

    for(int i = 0; i < words.size(); i++) {
        result += words[i];
        if(i < words.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl;
    std::cout << camelCase("two-words") << std::endl;
    std::cout << camelCase("two words") << std::endl;
    std::cout << camelCase("all separate words") << std::endl;

    return 0;
}