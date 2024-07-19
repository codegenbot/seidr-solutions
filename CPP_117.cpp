#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    for (char c : s) {
        if (isalpha(c)) {
            word += c;
        } else {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
                if (words.size() == n) {
                    break;
                }
            }
        }
    }
    return words;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> result = select_words("Hello, world! Welcome to the code contest.", 2);

    assert(issame(result, {"world", "contest"}));

    for (const string &word : result) {
        cout << word << endl;
    }

    return 0;
}