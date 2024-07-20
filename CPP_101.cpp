#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> words_string(string s){
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        if (word.find(',') != string::npos) {
            word.erase(remove(word.begin(), word.end(), ','), word.end());
        }
        words.push_back(word);
    }
    return words;
}

int main() {
    string s;
    getline(cin, s);
    vector<string> result = words_string(s);
    for (const auto &word : result) {
        cout << word << " ";
    }
    return 0;
}