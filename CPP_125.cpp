#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include <cctype>
#include <algorithm>

using namespace std;

int islower(int c); // Declare missing function prototype

vector<string> split_words(string txt);
bool issame(vector<string> a, vector<string> b);

int islower(int c) {
    return (c >= 'a' && c <= 'z');
}

vector<string> split_words(string txt) {
    vector<string> words;
    string word = "";
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    if (words.empty()) {
        int count = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        words.push_back(to_string(count));
    }
    return words;
}

bool issame(const vector<string>& a, const vector<string>& b) { // Changed signature as per initial declaration
    return a == b;
}

int main() {
    assert(issame(split_words(""), { "0" }));
}