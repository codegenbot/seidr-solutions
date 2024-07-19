#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> split_words(const std::string& str) {
    std::vector<std::string> words;
    
    size_t start = 0, end = 0;
    while ((start = str.find_first_not_of(' ', end)) != std::string::npos) {
        end = str.find(' ', start);
        words.push_back(str.substr(start, end - start));
    }
    
    return words;
}

int main() {
    // Test your code here
    std::string input;
    std::getline(std::cin, input); // Read input from user
    
    std::vector<std::string> input_words = split_words(input);
    
    assert(issame(input_words, {"expected_word1", "expected_word2"}));
    
    return 0;
}