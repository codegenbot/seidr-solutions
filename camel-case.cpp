#include <vector>
#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;

    while (ss >> word) {
        words.push_back(word);
    }

    for(int i = 0; i < words.size(); i++) {
        if(i > 0)
            words[i][0] = toupper((char)words[i][0]);
    }

    std::string result;
    for(int i = 0; i < words.size(); i++) {
        result += words[i];
        if(i < words.size() - 1) {
            result += " ";
        }
    }

    int j = 0;
    while(j < result.length()) {
        if(result[j] == ' ') {
            result.erase(j, 1);
        } else {
            j++;
        }
    }

    for(int i = 0; i < words.size(); i++) {
        if(i > 0) {
            result += std::string(1, toupper((char)words[i][0])) + std::string(words[i].erase(0, 1));
        } else {
            result += words[i];
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