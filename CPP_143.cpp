#include <iostream>
#include <string>

std::string words_in_sentence(std::string sentence) {
    int wordCount = 0;
    for (char c : sentence) {
        if (c == ' ') {
            wordCount++;
        }
    }
    wordCount++; // add one more for the last word
    return std::to_string(wordCount);
}

int main() {
    std::cout << words_in_sentence("here is") << std::endl;
    return 0;
}