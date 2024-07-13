#include <iostream>
#include <sstream>
#include <string>

int words_in_sentence(const std::string& sentence) {
    size_t space = 0;
    int wordCount = 1;
    for (size_t i = 0; i < sentence.size(); ++i) {
        if (sentence[i] == ' ') {
            ++wordCount;
            space = i + 1;
        }
    }
    return wordCount;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    try {
        if (sentence.empty()) {
            throw std::runtime_error("Error: Invalid input. Please enter a valid sentence.");
        }
        int wordCount = words_in_sentence(sentence);
        size_t space = sentence.find(' ');
        if (space != std::string::npos) {
            std::cout << sentence.substr(0, space) << std::endl;
        } else {
            std::cout << sentence << std::endl;
        }
    } catch (...) {
        std::cerr << "Error: Invalid input. Please enter a valid sentence." << std::endl;
    }
    return 0;
}