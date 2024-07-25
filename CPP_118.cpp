#include <string>
#include <algorithm>

using namespace std;

string get_closest_vowel(string word) {
    int n = word.size();
    string vowels("aeiouAEIOU");
    for (int i = n - 1; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos && isalpha(word[i-1]) && !isvowel(word[i-1])) {
            return string(1, word[i]);
        }
    }
    return "";
}

bool isvowel(char c) {
    string vowels("aeiouAEIOU");
    return vowels.find(c) != string::npos;
}