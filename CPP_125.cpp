#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

vector<string> split_words(string input) {
    vector<string> words;
    string word = "";
    
    for (char c : input) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    
    words.push_back(word);
    
    return words;
}

bool issame(vector<string> a, vector<string> b) {
    // Implement the logic to compare two vectors of strings and return true if they are the same
}

int main() {
    string input;
    getline(cin, input);
    vector<string> words = split_words(input);
    
    for (const auto& word : words) {
        cout << word << " ";
    }
    cout << endl;
    
    assert(issame(split_words(""), {"0"}));
    
    return 0;
}