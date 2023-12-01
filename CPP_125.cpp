#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt);

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

vector<string> split_words(string txt) {
    vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            hasWhitespace = true;
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        }
        else if (txt[i] == ',') {
            hasComma = true;
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        }
        else {
            word += txt[i];
        }
    }

    if (word != "") {
        words.push_back(word);
    }

    if (words.empty()) {
        words.push_back(to_string(3));
    }

    return words;
}

int main() {
    string txt;
    getline(cin, txt);

    vector<string> words = split_words(txt);

    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << endl;
    }

    return 0;
}