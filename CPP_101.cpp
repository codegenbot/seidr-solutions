#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

vector<string> words_string(string s) {
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }
    return words;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    vector<string> result = words_string(input);
    
    if (result.empty()) {
        cout << "No words found in the input.\n";
    } else {
        cout << "Words in the input: ";
        for (const string& word : result) {
            cout << word << " ";
        }
        cout << "\n";
    }
    
    return 0;
}