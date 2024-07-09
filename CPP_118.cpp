#include <iostream>
#include <string>

std::string get_closest_vowel(const std::string& word) {
    for (char c : word) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return std::string(1, c);
        }
    }
    return "No vowel found";
}

int main() {
    std::string __str;
    std::cout << "Enter a word: ";
    std::getline(std::cin, __str); 
    std::cout << "The closest vowel is: " << get_closest_vowel(__str) << std::endl;
    return 0;
}