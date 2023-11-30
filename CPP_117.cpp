#include <iostream>
#include <vector>
#include <algorithm>

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    int consonantCount = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
            if (isalpha(s[i]) && !isvowel(s[i])) {
                consonantCount++;
            }
        } else {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        }
    }

    if (consonantCount == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}