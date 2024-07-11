#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string get_closest_vowel(std::string word) {
        for (int i = 0; i < word.size(); ++i) {
            if (!isalpha(word[i])) continue;
            if (std::tolower(word[i]) == 'a' || std::tolower(word[i]) == 'e' || 
                std::tolower(word[i]) == 'i' || std::tolower(word[i]) == 'o' || 
                std::tolower(word[i]) == 'u') {
                for (int j = i - 1; j >= 0; --j) {
                    if (!isalpha(word[j])) break;
                    if (std::tolower(word[j]) == 'a' || std::tolower(word[j]) == 'e' || 
                        std::tolower(word[j]) == 'i' || std::tolower(word[j]) == 'o' || 
                        std::tolower(word[j]) == 'u') {
                        return word[i];
                    }
                }
            }
        }
        return "";
    }

    if (get_closest_vowel("Above") != "o")
        std::cout << "Test failed" << std::endl;
    else
        std::cout << "Test passed" << std::endl;

    return 0;
}