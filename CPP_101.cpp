#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

vector<string> words_string(string s){
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
    cout << "Enter a sentence: ";
    getline(cin, input);

    vector<string> result = words_string(input);

    if (result.empty()) {
        cout << "No words detected." << endl;
    } else {
        cout << "Words detected:" << endl;
        for (const string& word : result) {
            cout << word << endl;
        }
    }

    return 0;
}