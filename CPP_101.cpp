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
    string s2 = "One, two, three, four, five, six";
    
    vector<string> v1 = words_string(s1);
    vector<string> v2 = words_string(s2);

    for (string word : v1) {
        cout << word << " ";
    }
    cout << endl;

    for (string word : v2) {
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}