#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

std::vector<std::string> split_words(const std::string& input) {
    std::vector<std::string> words;
    std::istringstream iss(input);
    std::string word;
    
    while (iss >> word) {
        words.push_back(word);
    }
    
     return words;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    std::string input1, input2;
    std::getline(std::cin, input1);
    std::getline(std::cin, input2);
    
    std::vector<std::string> a = split_words(input1);
    std::vector<std::string> b = split_words(input2);
    
    if (issame(a, b)) {
        std::cout << "Same" << std::endl;
    } else {
        std::cout << "Different" << std::endl;
    }
    
    return 0;
}