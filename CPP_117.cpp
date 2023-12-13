```cpp
#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool is_consonant(char c) {
    c = tolower(c);
    if (c >= 'a' && c <= 'z') {
        return !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    return false;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
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

std::vector<std::string> select_words(const std::string& s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    int consonants = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
            if (is_consonant(s[i])) {
                consonants++;
            }
        } else {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        }
    }
    if (consonants == n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    
    return 0;
}
```