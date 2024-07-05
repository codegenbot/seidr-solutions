#include <iostream>
#include <string>
using namespace std;

string get_closest_vowel(const string& word) {
    string vowels = "aeiouAEIOU";
    for (size_t i = word.length(); i-- > 1;) {
        if (vowels.find(word[i]) != string::npos &&
            vowels.find(word[i - 1]) == string::npos &&
            vowels.find(word[i + 1]) == string::npos) {
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    cout << get_closest_vowel("Above") << endl; // expected output: "o"
    return 0;
}