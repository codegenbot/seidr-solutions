#include <iostream>
#include <string>

std::string get_closest_vowel(const std::string& word) {
    for (int i = 0; i < word.size(); ++i) {
        if ("aeiou".find(word[i]) != std::string::npos)
            return std::string(1, word[i]);
    }
    return "";
}

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;
    std::cout << "The closest vowel is: " << get_closest_vowel(word) << std::endl;
    return 0;
}