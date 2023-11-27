#include <iostream>
#include <vector>
#include <cctype>
#include <cassert>

size_t count_consonants(std::string word) {
    size_t count = 0;
    for (char c : word) {
        if (std::isalpha(c) && !isvowel(std::tolower(c))) {
            count++;
        }
    }
    return count;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    if (s.empty()) {
        return result;
    }
    std::string word;
    for (char c : s) {
        if (c == ' ') {
            if (count_consonants(word) == n) {
                result.push_back(word);
            }
            word.clear();
        } else {
            word += c;
        }
    }
    if (count_consonants(word) == n) {
        result.push_back(word);
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}