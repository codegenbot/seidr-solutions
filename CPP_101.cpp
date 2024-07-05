#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

// Function to split a string by spaces and commas into a vector of words
vector<string> words_string(string s) {
    vector<string> result;
    string word;
    for (char c : s) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    return result;
}

// Function to check if two vectors of strings are the same
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(words_string("ahmed , gamal"), {"ahmed", "gamal"}));
    cout << "All tests passed!" << endl;
    return 0;
}