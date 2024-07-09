#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

char get_next_vowel(const std::string& word, char prev) {
    for (int i = 0; i < word.size(); ++i) {
        if (isvowel(word[i])) {
            return word[i];
        }
    }
    return '\0';
}

std::string get_closest_vowel(const std::string& word) {
    for (char c : word) {
        if (!isvowel(c)) {
            char closest = get_next_vowel(word, c);
            if (closest == '\0') {
                throw std::runtime_error("No vowel found in the string");
            }
            return std::string(1, closest);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    try {
        std::cout << get_closest_vowel("Hello") << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}