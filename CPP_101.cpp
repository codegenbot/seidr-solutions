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
    cout << "Enter a string: ";
    getline(cin, input);

    vector<string> result = words_string(input);

    cout << "Words in the input string:" << endl;
    for (const auto& word : result) {
        cout << word << endl;
    }

    return 0;
}