#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::vector<std::string> words;
    std::string word = "";
    
    for (char c : input) {
        if (c == '-') {
            words.push_back(word);
            word = "";
        } else if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty())
        words.push_back(word);
    
    std::string result = "";
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0)
            result += (char)toupper(words[i][0]);
        else
            result += tolower(words[i][0]);
        result += &words[i][1];
    }
    
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}