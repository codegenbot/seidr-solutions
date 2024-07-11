#include <string>

string get_closest_vowel(string word);

#include <iostream>

int main() {
    std::string word;
    std::cin >> word;
    std::cout << get_closest_vowel(word) << std::endl;
}

string get_closest_vowel(string word){
    std::string vowels = "aeiouAEIOU";
    for (int i = word.length() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != std::string::npos && !isalpha(word[i-1]) && !isalpha(word[i+1])) {
            return std::string(1, word[i]);
        }
    }
    return "";
}