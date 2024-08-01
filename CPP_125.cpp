#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> split_words(string input) {
    vector<string> words;
    istringstream iss(input);
    string word;
    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    string input;
    getline(cin, input);
    
    vector<string> a = split_words(input);
    vector<string> b = split_words(input);
    
    if (issame(a, b)) {
        cout << "Same" << endl;
    } else {
        cout << "Different" << endl;
    }
    
    return 0;
}