#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(string a, string b) {
    return a == b;
}

vector<string> select_words(string s, int n);

int main() {
    string s = "apple banana orange pear";
    int n = 2;
    vector<string> words = select_words(s, n);

    for (string word : words) {
        cout << word << " ";
    }

    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonant_count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else {
            if (isalpha(c) && !strchr("aeiouAEIOU", c)) {
                consonant_count++;
            }
            word += c;
        }
    }

    if (consonant_count == n) {
        result.push_back(word);
    }

    return result;
}