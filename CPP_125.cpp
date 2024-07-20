#include <iostream>
#include <vector>
#include <sstream>
#include <cassert>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size();
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
    std::getline(std::cin, input);
    std::vector<std::string> words = split_words(input);

    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    assert(issame(split_words(""), {"0"}));

    return 0;
}