#include <iostream>
#include <string>
#include <algorithm> // for isvowel function
#include <cctype>

using namespace std;

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ||
           tolower(c) >= 'a' && tolower(c) <= 'z';
}

string get_closest_vowel(string word) {
    int left = 0, right = word.size() - 1;
    while (left < right) {
        if (!isvowel(word[left])) ++left;
        else if (!isvowel(word[right])) --right;
        else return word.substr(left + 1, right - left);
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    cout << get_closest_vowel("Above") << endl; // test your function
    return 0;
}