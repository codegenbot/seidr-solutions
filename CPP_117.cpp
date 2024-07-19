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
            if (!word.empty() && count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') + count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u') <= n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty() && count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') + count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u') <= n) {
        string trimmedWord;
        for (char c : word) {
            if (count(&c, 1, 'a') + count(&c, 1, 'e') + count(&c, 1, 'i') + count(&c, 1, 'o') + count(&c, 1, 'u') <= n) {
                trimmedWord += c;
            }
        }
        result.push_back(trimmedWord);
    } else {
        result.push_back(word);
    }
    return result;
}

int main() {
    string s;
    int n;
    cout << "Enter a sentence: ";
    getline(cin, s);
    cout << "Enter the maximum number of vowels allowed in each word: ";
    cin >> n;
    vector<string> words = select_words(s, n);
    for (string w : words) {
        cout << w << endl;
    }
    return 0;
}