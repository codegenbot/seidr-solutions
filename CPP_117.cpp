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
    string s;
    int n;

    cout << "Enter a sentence: ";
    cin >> s;
    cout << "Enter the number of consonants: ";
    cin >> n;

    vector<string> words = select_words(s, n);

    for (const auto& word : words) {
        cout << word << endl;
    }

    return 0;
}