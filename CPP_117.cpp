#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int count_consonants(std::string word) {
    int count = 0;
    for (char c : word) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            count++;
        }
    }
    return count;
}

bool issame(std::vector<std::string> a, std::vector<std::string> c) {
    if (a.size() != c.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != c[i]) {
            return false;
        }
    }
    return true;
}

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
    if (!word.empty() && count_consonants(word) == n) {
        result.push_back(word);
    }
    return result;
}