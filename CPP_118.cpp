#include <iostream>
#include <string>
#include <cctype>

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

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "The closest vowel is: " << get_closest_vowel(input) << '\n';

    return 0;
}