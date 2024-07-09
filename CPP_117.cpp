#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool has_n_consonants = false;
            for (char ch : word) {
                if (!ispunct(ch) && !isvowel(ch)) {
                    has_n_consonants = true;
                    if (++consonant_count == n) break;
                }
            }
            if (has_n_consonants) result.push_back(word);
            word = "";
            consonant_count = 0;
        }
    }
    return result;
}

int main() {
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> words = select_words(s, n);
    for (string word : words) {
        cout << word << endl;
    }
    return 0;
}