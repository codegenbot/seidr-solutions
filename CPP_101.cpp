#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> words_string(string s) {
    vector<string> result;
    string word = "";
    
    for (char c : s) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        result.push_back(word);
    }
    
    return result;
}

int main() {
    string s = "Hi, my name is John";
    vector<string> words = words_string(s);
    for (string word : words) {
        cout << word << endl;
    }
    return 0;
}