#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool isVowel(char c) {
    string vowels = "aeiouAEIOU";
    return vowels.find(c) != string::npos;
}

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int n = word.length();
    int i = n - 2;
    while (i > 0) {
        if (vowels.find(word[i]) != string::npos && !isVowel(word[i-1]) && !isVowel(word[i+1])) {
            return string(1, word[i]);
        }
        i--;
    }
    return "";
}

int main() {
    assert (get_closest_vowel("Above") == "o");
    assert (get_closest_vowel("Coding") == "i");
    assert (get_closest_vowel("Input") == "u");
    assert (get_closest_vowel("Output") == "");
    
    return 0;
}