#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> words;
    stringstream ss(s);
    string word;
    
    while (ss >> word) {
        words.push_back(word);
    }
    
    if (n >= 0 && n < words.size()) {
        words.erase(words.begin() + n);
    }
    
    return words;
}

int main() {
    vector<string> result = select_words("a b c d e f", 1);
    
    cout << (result == vector<string>{"a", "c", "d", "e", "f"});
    
    return 0;
}