#include <iostream>
#include <vector>
#include <string>
#include <sstream>

vector<string> words_string(string s) {
    vector<string> words;
    stringstream ss(s);
    string word;
    
    while (getline(ss, word, ' ')) {
        words.push_back(word);
    }
    
    return words;
}

int main() {
    string input;
    getline(cin, input);

    vector<string> result = words_string(input);

    for (string word : result) {
        cout << word << " ";
    }

    return 0;
}