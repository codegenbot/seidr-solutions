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
            if (!word.empty() && count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') +
                count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u') <= n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += tolower(c);
        }
    }
    if (!word.empty() && count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') +
        count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u') <= n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    cout << "{";
    for (string word : select_words("Mary had a little lamb", 4)) {
        cout << "\"" << word << "\"";
    }
    cout << "}" << endl;

    cout << "{";
    for (string word : select_words("Mary had a little lamb", 3)) {
        cout << "\"" << word << "\"";
    }
    cout << "}" << endl;

    cout << "{}" << endl;

    cout << "{";
    for (string word : select_words("Hello world", 4)) {
        cout << "\"" << word << "\"";
    }
    cout << "}" << endl;

    cout << "{";
    for (string word : select_words("Uncle sam", 3)) {
        cout << "\"" << word << "\"";
    }
    cout << "}" << endl;
    return 0;
}