#include <iostream>
#include <string>
#include <vector>

std::string convertToCamelCase(const std::string& input) {
    std::string output;
    std::vector<std::string> words;
    std::string word;

    for (char c : input) {
        if (c == '-') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    
    words.push_back(word);

    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            words[i][0] = toupper(words[i][0]);
        }
        output += words[i];
    }

    return output;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::cout << convertToCamelCase(input) << std::endl;

    return 0;
}