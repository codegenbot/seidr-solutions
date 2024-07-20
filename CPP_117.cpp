```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else if (!word.empty()) {
            bool has_n_consonants = false;
            int consonant_count = 0;
            for (char ch : word) {
                if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'
                    && ch != ' ') {
                    consonant_count++;
                    has_n_consonants = true;
                }
            }
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    bool has_n_consonants = false;
    int consonant_count = 0;
    for (char ch : word) {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'
            && ch != ' ') {
            consonant_count++;
            has_n_consonants = true;
        }
    }
    if (consonant_count == n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    cout << "[";
    for (string word : select_words("Mary had a little lamb", 4)) {
        cout << "\"" << word << "\"";
    }
    cout << "]";

    return 0;
}