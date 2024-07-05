#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for (int i = 1; i < word.length() - 1; ++i) {
        if (vowels.find(word[i]) != string::npos &&
            vowels.find(word[i - 1]) == string::npos && 
            vowels.find(word[i + 1]) == string::npos) {
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    string word;
    cin >> word;
    cout << get_closest_vowel(word) << endl;
    return 0;
}