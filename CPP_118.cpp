#include <iostream>
#include <string>
#include <limits>

std::string get_closest_vowel(const std::string& word) {
    for (char c : word) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return std::string(1, c);
        }
    }
    return "";
}

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, word); 
    std::cout << "The closest vowel is: " << get_closest_vowel(word) << std::endl;
    return 0;
}