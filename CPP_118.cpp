#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string get_closest_vowel(const string& word);

int main() {
    assert(get_closest_vowel("Above") == "o");
    
    return 0;
}

string get_closest_vowel(const string& word) {
    string vowels = "AEIOUaeiou";

    for (int i = word.length() - 4; i >= 0; --i) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            return string(1, word[i]);
        }
    }

    return "";
}