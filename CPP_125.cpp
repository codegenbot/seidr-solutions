#include <iostream>
#include <vector>
#include <sstream>
#include <cassert>
#include <algorithm>

bool is_same(char a, char b) {
    return tolower(a) == tolower(b);
}

bool is_same(const std::string& a, const std::string& b) {
    if (a.size() != b.size()) {
        return false;
    }
    return std::equal(a.begin(), a.end(), b.begin(), is_same);
}

std::vector<std::string> split_words(const std::string& input) {
    std::vector<std::string> words;
    std::stringstream ss(input);
    std::string word;
    
    while (ss >> word) {
        words.push_back(word);
    }
    
    return words;
}

int main() {
    std::string input;
    getline(std::cin, input);
    std::vector<std::string> words = split_words(input);
    
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;
    
    assert(is_same("", "0"));
    
    return 0;
}