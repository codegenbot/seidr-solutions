#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;
    std::cout << "The closest vowel is: " << get_closest_vowel(word) << std::endl;
    return 0;
}