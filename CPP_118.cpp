#include <iostream>
#include <string>
#include <cctype>

std::string get_closest_vowel(std std::string word) {
    for (int i = 0; i < word.size(); i++) {
        if (std::tolower(word[i]) == 'a' || std::tolower(word[i]) == 'e' || std::tolower(word[i]) == 'i' || std::tolower(word[i]) == 'o' || std::tolower(word[i]) == 'u') {
            return word.substr(i, 1);
        }
    }
    if (word.empty()) {
        return "Error: The input string is empty.";
    } else {
        return "Error: No vowels found in the input string.";
    }
}

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::getline(std::cin, word); 
    if (word.empty()) {
        std::cout << get_closest_vowel(word) << std::endl;
    } else {
        std::cout << "The closest vowel is: " << get_closest_vowel(word) << std::endl;
    }
    return 0;
}