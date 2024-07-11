#include <iostream>
#include <string>
#include <vector>
#include <sstream>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    istringstream iss(s);
    string word;
    
    for (int i = 0; i < n && iss >> word; i++) {
        words.push_back(word);
    }
    
    return words;
}

int main() {
    string input;
    int n;
    cin >> input >> n;
    
    vector<string> selectedWords = select_words(input, n);
    
    for (const auto& word : selectedWords) {
        cout << word << " ";
    }
    
    return 0;
}