#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

bool issame(const std::string &word);

std::vector<std::string> select_words(std::string s, int n);

bool issame(const std::string &word) {
    char first = std::tolower(word[0]);
    for (char c : word) {
        if (std::tolower(c) != first) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    int consonant_count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                if (issame(word)) {
                    result.push_back(word);
                }
            }
            word = "";
            consonant_count = 0;
        } else {
            if (std::isalpha(c) && !std::strchr("aeiouAEIOU", c)) {
                consonant_count++;
            }
            word += c;
        }
    }

    if (consonant_count == n) {
        if (issame(word)) {
            result.push_back(word);
        }
    }

    return result;
}

int main() {
    std::string text;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, text);

    int n;
    std::cout << "Enter number of consonants in a word to select: ";
    std::cin >> n;

    std::vector<std::string> selected_words = select_words(text, n);

    std::cout << "Selected words with " << n << " consonants and all letters are the same: ";
    for (const std::string &word : selected_words) {
        std::cout << word << " ";
    }

    return 0;
}