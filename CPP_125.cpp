#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <sstream>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> split_words(const std::string& s) {
    std::vector<std::string> words;
    std::istringstream iss(s);

    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }

    return words;
}

int main() {
    std::string input_string;
    std::getline(std::cin, input_string);

    std::vector<std::string> words = split_words(input_string);

    for (const std::string& word : words) {
        std::cout << word << std::endl;
    }

    return 0;
}