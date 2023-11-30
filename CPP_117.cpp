#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool issame(vector<string> a, vector<string> b) {
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

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            int consonantCount = 0;
            for (int j = 0; j < word.length(); j++) {
                if (isalpha(word[j]) && !isvowel(word[j])) {
                    consonantCount++;
                }
            }
            if (consonantCount == n) {
                words.push_back(word);
            }
            word = "";
        }
    }
    int consonantCount = 0;
    for (int j = 0; j < word.length(); j++) {
        if (isalpha(word[j]) && !isvowel(word[j])) {
            consonantCount++;
        }
    }
    if (consonantCount == n) {
        words.push_back(word);
    }
    return words;
}

int main() {
    string sentence;
    int consonantCount;
    getline(cin, sentence);
    cin >> consonantCount;
    vector<string> words = select_words(sentence, consonantCount);
    for (string word : words) {
        cout << word << endl;
    }
    return 0;
}