```cpp
#include <iostream>
#include <sstream>
#include <string>

size_t count_words(const std::string& sentence) {
    size_t word_count = 0;
    bool in_word = false;

    for (char c : sentence) {
        if (!in_word && !std::isspace(c)) {
            in_word = true;
            ++word_count;
        } else if (in_word && std::isspace(c)) {
            in_word = false;
        }
    }

    return word_count;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    try {
        if (sentence.empty()) {
            throw std::runtime_error("Error: Invalid input. Please enter a valid sentence.");
        }
        size_t word_count = count_words(sentence);
        std::cout << "Number of words in the sentence is: " << word_count << std::endl;
    } catch (...) {
        std::cerr << "Error: Invalid input. Please enter a valid sentence." << std::endl;
    }
    return 0;
}