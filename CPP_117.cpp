#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    for (char c : s) {
        if (c == ' ') {
            int consonants = std::count_if(word.begin(), word.end(), [](char ch) {
                return !strchr("aeiouAEIOU", ch) && isalpha(ch);
            });
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    int consonants = std::count_if(word.begin(), word.end(), [](char ch) {
        return !strchr("aeiouAEIOU", ch) && isalpha(ch);
    });
    if (consonants == n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}