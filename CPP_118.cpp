#include <iostream>
#include <string>
using namespace std;

string get_closest_vowel(const string& word) {
    string vowels = "aeiouAEIOU";
    for (int i = word.length() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos &&
            vowels.find(word[i - 1]) == string::npos &&
            vowels.find(word[i + 1]) == string::npos) {
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    cout << get_closest_vowel("Above") << endl;
    return 0;
}