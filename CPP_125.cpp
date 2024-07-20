#include <iostream>
#include <vector>
#include <cassert>
#include <string>
#include <sstream>

using namespace std;

vector<string> split_words(const string& txt) {
    vector<string> words;
    istringstream iss(txt);
    string word;
    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    vector<string> words;
    string input;
    getline(cin, input);
    istringstream iss(input);
    string word;
    
    while (iss >> word) {
        words.push_back(word);
    }
    
    for (const auto& word : words) {
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}