#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    stringstream ss(s);
    while (ss >> word) {
        words.push_back(word);
    }
    vector<string> result;
    for (int i = n; i < words.size(); i++) {
        result.push_back(words[i]);
    }
    return result;
}

int main() {
    string input;
    int n;
    getline(cin, input);
    cin >> n;
  
    vector<string> result = select_words(input, n);
  
    for (const string& word : result) {
        cout << word << " ";
    }
  
    return 0;
}