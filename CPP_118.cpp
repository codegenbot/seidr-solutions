#include <iostream>
#include <string>
#include <cctype>

std::string get_closest_vowel(const std::string& word) {
    int left = 0;
    for (int right = word.size() - 1; right > 0; --right) {
        if (!isvowel(word[right])) {
            break;
        }
        left = right;
    }

    while (left > 0 && !isvowel(word[left - 1]))
        --left;

    return left > 0 ? std::string(1, word[left - 1]) : "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    std::string input;
    std::cout << "Enter a word: ";
    std::getline(std::cin, input);

    std::string closestVowel = get_closest_vowel(input);
    if (!closestVowel.empty()) {
        std::cout << "The closest vowel is: " << closestVowel << std::endl;
    } else {
        std::cout << "No vowels found." << std::endl;
    }

    return 0;
}