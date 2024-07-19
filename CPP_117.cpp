#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    int consonantCount = 0;

    for (char c : s) {
        if (c != ' ') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                if (!word.empty()) {
                    if (consonantCount == n) {
                        result.push_back(word);
                    }
                    word = "";
                    consonantCount = 0;
                }
            } else {
                word += c;
                consonantCount++;
            }
        } else {
            if (!word.empty() && consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        }
    }

    if (!word.empty() && consonantCount == n) {
        result.push_back(word);
    }

    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
} 