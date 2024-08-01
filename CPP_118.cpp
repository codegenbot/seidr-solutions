#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string get_closest_vowel(string word);

int main() {
    assert(get_closest_vowel("Above") == "o");

    return 0;
}

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    
    for (int i = word.length() - 2; i > 0; i--) {
        if (consonants.find(word[i]) != string::npos && vowels.find(word[i-1]) != string::npos && consonants.find(word[i-2]) != string::npos) {
            return string(1, word[i-1]);
        }
    }
    
    return "";
}