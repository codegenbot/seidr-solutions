#include <iostream>
#include <vector>
#include <cassert>

bool is_consonant(char c) {
    c = tolower(c);
    return (c >= 'b' && c <= 'd') || (c >= 'f' && c <= 'h') || (c >= 'j' && c <= 'n') || (c >= 'p' && c <= 't') || (c >= 'v' && c <= 'z');
}

int count_consonants(std::string word) {
    int count = 0;
    for (char c : word) {
        if (is_consonant(c)) {
            count++;
        }
    }
    return count;
}

std::vector<std::string> select_words(std::string s, int n);

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

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    if (s.empty()) {
        return result;
    }
    std::string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (count_consonants(word) == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += s[i];
        }
    }
    if (count_consonants(word) == n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
}