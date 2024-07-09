#include <iostream>
#include <string>
#include <cctype>
#include <bits/stdc++.h>

std::string get_closest_vowel(const std::string& word) {
    for (char c : word) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            return std::string(1, c);
        }
    }
    return "";
}

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::getline(std::cin, word); 
    std::cout << "The closest vowel is: " << get_closest_vowel(word) << std::endl;
    return 0;
}