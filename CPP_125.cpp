#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> split_words(std::string input) {
    std::vector<std::string> words;
    std::string word;
    for (char c : input) {
        if (c == ' ') {
            words.push_back(word);
            word.clear();
        } else {
            word += c;
        }
    }
    words.push_back(word); // Add the last word
    return words;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::vector<std::string> a = split_words(input);
    std::vector<std::string> b = split_words(input);
    
    if (issame(a, b)) {
        std::cout << "Same" << std::endl;
    } else {
        std::cout << "Different" << std::endl;
    }
    
    return 0;
}