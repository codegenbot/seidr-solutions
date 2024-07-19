#include <iostream>
#include <string>

// Function to count words in a sentence
std::string words_in_sentence(const std::string& str) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(" ", pos)) != std::string::npos) {
        ++count;
        pos = str.find(" ", pos);
    }
    return "There are " + std::to_string(count) + " words in the sentence.";
}

int main() {
    std::cout << "Enter a sentence: ";
    std::string str;
    std::cin >> str;

    // Use the function to count words
    std::cout << words_in_sentence(str);

    return 0;
}