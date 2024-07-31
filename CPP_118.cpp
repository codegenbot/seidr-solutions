#include <iostream>
#include <string>
#include <cassert>

std::string get_closest_vowel(const std::string& word) {
    std::string vowels = "AEIOUaeiou";

    for (int i = word.length() - 1; i >= 0; --i) {
        if (vowels.find(word[i]) != std::string::npos && i > 0 && i < word.length() - 1 && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            return std::string(1, word[i]);
        }
    }

    return "";
}

int main() {
    std::string input;
    std::cin >> input;
    
    std::string result = get_closest_vowel(input);

    std::cout << result << std::endl;

    return 0;
}