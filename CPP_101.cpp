#include <iostream>
#include <vector>

using namespace std;

vector<string> words_string(string s);

int main() {
    string input;
    getline(cin, input);
    vector<string> output = words_string(input);
    for (string word : output) {
        cout << word << endl;
    }
    return 0;
}

vector<string> words_string(string s){
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == ',') {
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if (word != "") {
        words.push_back(word);
    }
    return words;
}