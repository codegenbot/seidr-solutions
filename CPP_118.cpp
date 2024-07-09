```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string get_closest_vowel(const std::string& word) {
    for (int i = 0; i < word.size(); i++) {
        if (std::tolower(word[i]) == 'a' || std::tolower(word[i]) == 'e' || std::tolower(word[i]) == 'i' || std::tolower(word[i]) == 'o' || std::tolower(word[i]) == 'u') {
            return word.substr(i, 1);
        }
    }
    return "";
}

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    char temp; 
    std::cin >> word; 
    std::getline(std::cin, word); 
    std::cout << "The closest vowel is: " << get_closest_vowel(word) << std::endl;
    return 0;
}