#include <iostream>
#include <string>
using namespace std;

string get_closest_vowel(const string& word) {
    string vowels = "aeiouAEIOU";
    for (int i = word.length() - 1; i >= 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    cout << get_closest_vowel("Above") << endl; // expected output: "o"
    return 0;
}