#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <cctype>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    int consonant_count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if (std::isalpha(c)) {
            if (std::tolower(static_cast<unsigned char>(c)) != 'a' && std::tolower(static_cast<unsigned char>(c)) != 'e' &&
                std::tolower(static_cast<unsigned char>(c)) != 'i' && std::tolower(static_cast<unsigned char>(c)) != 'o' &&
                std::tolower(static_cast<unsigned char>(c)) != 'u') {
                consonant_count++;
            }
            word += c;
        }
    }

    if (consonant_count == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), std::vector<std::string>{"b", "c", "d", "f"}));
    
    return 0;
}