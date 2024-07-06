#include <iostream>
#include <string>

int words_in_sentence(const std::string& sentence) {
    int count = 0;
    size_t pos = 0;

    while ((pos = sentence.find(' ', pos)) != std::string::npos) {
        ++count;
        ++pos; // Increment position to find the next space
    }

    return count + 1; // Add 1 for the last word
}

int main() {
    std::cout << words_in_sentence("here is") << std::endl;
    return 0;
}