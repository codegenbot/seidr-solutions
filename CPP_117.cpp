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
            if (!isalpha(c)) continue; // ignore non-alphabets
            char lowerCase = tolower(c);
            if (lowerCase != 'a' && lowerCase != 'e' && lowerCase != 'i' && lowerCase != 'o' && lowerCase != 'u') {
                consonants++;
            }
            word += c;
        }
    }

    // check the last word
    if (consonants == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> result = select_words(s, n);

    for (string str : result) {
        cout << str << endl;
    }
}