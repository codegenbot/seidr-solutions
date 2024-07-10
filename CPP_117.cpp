#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonants = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        } else {
            bool isVowel = false;
            for (char v : "aeiouAEIOU") {
                if (c == v) {
                    isVowel = true;
                    break;
                }
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
    string s;
    int n;

    cout << "Enter a sentence: ";
    getline(cin, s);

    cout << "Enter the number of consonants: ";
    cin >> n;

    vector<string> words = select_words(s, n);

    for (string word : words) {
        cout << word << endl;
    }

    return 0;
}