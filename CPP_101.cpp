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
                word = "";
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
    string s1 = "Hi, my name is John";
    vector<string> words1 = words_string(s1);
    for (string word : words1) {
        cout << word << endl;
    }

    string s2 = "One, two, three, four, five, six";
    vector<string> words2 = words_string(s2);
    for (string word : words2) {
        cout << word << endl;
    }
    return 0;
}