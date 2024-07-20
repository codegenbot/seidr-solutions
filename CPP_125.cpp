#include <iostream>
#include <vector>
#include <sstream>

bool issame(char a, char b) {
    return tolower(a) == tolower(b);
}

vector<string> split_words(string input) {
    vector<string> words;
    stringstream ss(input);
    string word;
    
    while (ss >> word) {
        words.push_back(word);
    }
    
    return words;
}

int main() {
    string input;
    getline(cin, input);
    vector<string> words = split_words(input);
    
    for (const auto& word : words) {
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}