#include <iostream>
#include <string>
#include <cassert>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int n = word.length();
    int i = n - 2;
    while (i > 0) {
        if (vowels.find(word[i]) != string::npos && !isVowel(word[i - 1]) && !isVowel(word[i + 1])) {
            return string(1, word[i]);
        }
        i--;
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    assert(get_closest_vowel("Hello") == "o");
    assert(get_closest_vowel("Yellow") == "e");
    assert(get_closest_vowel("Apple") == "");
    // Add more test cases here

    return 0;
}