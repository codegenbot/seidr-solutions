#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                int consonants = 0;
                for (char ch : word) {
                    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'
                        && ch != 'y') {
                        consonants++;
                    }
                }
                if (consonants == n) {
                    result.push_back(word);
                }
                word = "";
            }
        } else {
            word += c;
        }
    }
    // Check the last word
    if (!word.empty()) {
        int consonants = 0;
        for (char ch : word) {
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'
                && ch != 'y') {
                consonants++;
            }
        }
        if (consonants == n) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> result = select_words(s, n);
    for (string word : result) {
        cout << word << endl;
    }
    return 0;
}