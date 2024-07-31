#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<string> split_words(string txt);

int main() {
    string input;
    getline(cin, input);
    vector<string> result = split_words(input);
    for (string word : result) {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}

vector<string> split_words(string txt) {
    vector<string> result;
    if (txt.empty()) {
        return result;
    }
    string word = "";
    for (char c : txt) {
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
    if (result.size() == 0) {
        result.push_back(to_string(count_if(txt.begin(), txt.end(), [](char c) { return islower(c) && (c - 'a') % 2 == 1; })));
    }
    return result;
}