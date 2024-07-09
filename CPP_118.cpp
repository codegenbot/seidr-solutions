```
#include <iostream>
#include <string>

std::string get_closest_vowel(const std::string& word) {
    for (int i = 0; i < word.size(); ++i) {
        if (std::string("aeiou").find(std::string(1, word[i])) != std::string::npos)
            return std::string(1, word[i]);
    }
    return "";
}

std::cout << "Enter a word: ";
std::cin >> word;
std::cout << "The closest vowel is: " << get_closest_vowel(word) << std::endl;