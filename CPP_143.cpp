```cpp
#include <iostream>
#include <sstream>
#include <string>

std::string words_in_sentence(std::string sentence) {
    std::istringstream ss(sentence.c_str());
    std::string word;
    int count = 0;
    while (std::getline(ss, word, ' ')) {
        if (count == 1)
            return word;
        ++count;
    }
    return "";
}

int main() {
    assert(words_in_sentence("here is") == "is");
    std::string sentence;
    std::getline(std::cin, sentence);
    try {
        std::cout << words_in_sentence(sentence) << std::endl;
    } catch (...) {
        std::cerr << "Error: Invalid input. Please enter a valid sentence." << std::endl;
    }
    return 0;
}