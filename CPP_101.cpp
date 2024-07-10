#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cassert>

std::vector<std::string> words_string(std::string s) {
    std::vector<std::string> words;
    std::stringstream ss(s);
    std::string word;
    while (std::getline(ss, word, ' ')) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }
    return words;
}

int main() {
    assert(words_string("ahmed     , gamal") == std::vector<std::string>{"ahmed", "gamal"});
    
    return 0;
}