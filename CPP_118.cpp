#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string get_closest_vowel(string word) {
    for (int i = word.length() - 2; i >= 1; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' ||
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' ||
            word[i] == 'U') {
            for (int j = i - 1; j >= 0; --j) {
                if (!isVowel(word[j])) {
                    return word.substr(i, 1);
                }
            }
        }
    }
    return "";
}

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    cout << "The closest vowel is: " << get_closest_vowel(word) << endl;
    return 0;
}