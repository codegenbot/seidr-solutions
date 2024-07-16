#include <iostream>
#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b);

vector<string> select_words(const string& s, int n) {
    vector<string> words;
    string word = "";
    int consonant_count = 0;
    for (char c : s) {
        if (c != ' ') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                if (!word.empty()) {
                    if (consonant_count == n) {
                        words.push_back(word);
                    }
                    word = "";
                    consonant_count = 0;
                }
            } else {
                word += c;
                consonant_count++;
            }
        } else {
            if (!word.empty() && consonant_count == n) {
                words.push_back(word);
            }
            word = "";
            consonant_count = 0;
        }
    }
    if (!word.empty() && consonant_count == n) {
        words.push_back(word);
    }
    return words;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Main function implementation
    return 0;
}