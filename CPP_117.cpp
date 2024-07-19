#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    for (char c : s) {
        if (isalnum(c) || c == '-') {
            word += c;
        } else {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    if (words.size() < n) {
        cerr << "Not enough words in the input string" << endl;
        exit(1);
    }

    return vector<string>(words.end() - n, words.end());
}

int main() {
    vector<string> result = select_words("Hello, world! Welcome to the code contest.", 2);

    assert((result == vector<string>{"world", "contest"}));

    for (const string& word : result) {
        cout << word << endl;
    }

    return 0;
}