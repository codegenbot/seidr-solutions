```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string get_closest_vowel(const std::string& word) {
    for (int i = 0; i < word.size(); i++) {
        char c = std::tolower(word[i]);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? &c + 1 : "";
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