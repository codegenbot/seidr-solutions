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
            bool has_n_consonants = count_if(word.begin(), word.end(),
                                              [](char c){ return !isalpha(c) || isvowel(c); }) == n;
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    bool has_n_consonants = count_if(word.begin(), word.end(),
                                      [](char c){ return !isalpha(c) || isvowel(c); }) == n;
    if (has_n_consonants) {
        result.push_back(word);
    }
    return result;
}

int main() {
    cout << "{";
    for (const string& s : select_words("Mary had a little lamb", 4)) {
        cout << "\"" << s << "\"";
    }
    cout << "}" << endl;

    cout << "{";
    for (const string& s : select_words("Mary had a little lamb", 3)) {
        cout << "\"" << s << "\"";
    }
    cout << "}" << endl;

    cout << "{}" << endl;

    cout << "{";
    for (const string& s : select_words("Hello world", 4)) {
        cout << "\"" << s << "\"";
    }
    cout << "}" << endl;

    cout << "{";
    for (const string& s : select_words("Uncle sam", 3)) {
        cout << "\"" << s << "\"";
    }
    cout << "}" << endl;
    return 0;
}