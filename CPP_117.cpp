#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    bool in_word = false;

    for (char c : s) {
        if (c == ' ') {
            if (!in_word) continue;
            in_word = false;
            if (count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') +
                count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') +
                count(word.begin(), word.end(), 'u') <= n) {
                result.push_back(word);
            }
            word = "";
        } else if (isalpha(c)) {
            in_word = true;
            word += tolower(c);
        }
    }

    if (!in_word) return result;

    if (count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') +
        count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') +
        count(word.begin(), word.end(), 'u') <= n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> res = select_words(s, n);

    for (string str : res) {
        cout << str << endl;
    }

    return 0;
}