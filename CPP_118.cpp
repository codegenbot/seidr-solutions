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

    return left > 0 ? word.substr(left - 1, 1) : "";
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "The closest vowel is: " << get_closest_vowel(input) << std::endl;
    return 0;
}