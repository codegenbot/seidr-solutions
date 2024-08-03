# include <iostream>
# include <vector>
# include <string>
# include <sstream>
# include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> split_words(string txt) {
    vector<string> words;
    stringstream ss(txt);
    string word;
    while (ss >> word) {
        words.push_back(word);
    }
    return words;
}


```