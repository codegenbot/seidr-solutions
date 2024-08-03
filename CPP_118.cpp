#include <iostream>
#include <string>
#include <cctype>

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

std::string get_closest_vowel(std::string word) {
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

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    if (!input.empty()) {
        std::string closest_vowel = get_closest_vowel(input);
        if (!closest_vowel.empty())
            std::cout << "The closest vowel is: " << closest_vowel << std::endl;
        else
            std::cout << "No vowels found in the string." << std::endl;
    } else {
        std::cout << "You didn't enter a string. Please try again." << std::endl;
    }
    
    return 0;
}