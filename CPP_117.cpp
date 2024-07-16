#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b);

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word;
    int countConsonants = 0;

    for (char c : s) {
        if (c == ' ') {
            if (countConsonants == n) {
                result.push_back(word);
            }
            word = "";
            countConsonants = 0;
        } else if (isalpha(c)) {
            char lc = tolower(c);
            if (lc != 'a' && lc != 'e' && lc != 'i' && lc != 'o' && lc != 'u') {
                countConsonants++;
            }
            word += c;
        }
    }

    if (countConsonants == n) {
        result.push_back(word);
    }

    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    
    return 0;
}