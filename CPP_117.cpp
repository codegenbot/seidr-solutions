#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    int consonants = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonants == n) {
                result.push_back(word);
            }
            word.clear();
            consonants = 0;
        } else {
            bool isConsonant = false;
            for (char ch : "bcdfghjklmnpqrstvwxyz") {
                if (tolower(c) == tolower(ch)) {
                    isConsonant = true;
                    break;
                }
            }
            if (isConsonant) {
                consonants++;
            }
            word += c;
        }
    }

    if (consonants == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    cout << "{";
    for (string s : select_words("Mary had a little lamb", 4)) {
        cout << "\"" << s << "\"";
    }
    cout << "}" << endl;

    cout << "{";
    for (string s : select_words("Mary had a little lamb", 3)) {
        cout << "\"" << s << "\"";
    }
    cout << "}" << endl;

    cout << "{}" << endl;

    cout << "{";
    for (string s : select_words("Hello world", 4)) {
        cout << "\"" << s << "\"";
    }
    cout << "}" << endl;

    cout << "{";
    for (string s : select_words("Uncle sam", 3)) {
        cout << "\"" << s << "\"";
    }
    cout << "}" << endl;

    return 0;
}