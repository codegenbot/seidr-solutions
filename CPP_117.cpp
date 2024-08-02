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
            bool isVowel = false;
            switch (tolower(c)) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    isVowel = true;
                    break;
            }
            if (!isVowel) {
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
    // Test cases
    cout << "{";
    for (string word : select_words("Mary had a little lamb", 4)) {
        cout << "\"" << word << "\"";
    }
    cout << "}" << endl;

    cout << "{";
    for (string word : select_words("Mary had a little lamb", 3)) {
        cout << "\"" << word << "\"";
    }
    cout << "}" << endl;

    cout << "{}" << endl;

    cout << "{";
    for (string word : select_words("Hello world", 4)) {
        cout << "\"" << word << "\"";
    }
    cout << "}" << endl;

    cout << "{";
    for (string word : select_words("Uncle sam", 3)) {
        cout << "\"" << word << "\"";
    }
    cout << "}" << endl;
    return 0;
}