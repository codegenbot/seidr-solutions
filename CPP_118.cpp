#include <iostream>
#include <string>

bool ispunct(char c) {
    static const std::string punctuations = "!\"#$%&'()*+,-./:;<=>?@[\]^_`{|}~";
    return punctuations.find(c) != std::string::npos;
}

std::string firstPunctuation(std::string word) {
    for (int i = 0; i < word.length(); ++i) {
        if (ispunct(word[i])) return word[i];
        if (ispunct(word[word.length() - 1 - i])) return word[word.length() - 1 - i];
    }
    return "";
}

int main() {
    std::string word;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, word);
    std::cout << "First punctuation mark is: " << firstPunctuation(word) << std::endl;
    return 0;
}