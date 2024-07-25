#include <string>
#include <algorithm>

using namespace std;

bool isvowel(char c) {
    string vowels = "aeiouAEIOU";
    return vowels.find(1, to_string(c)) != string::npos;
}

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (vowels.find(to_string(word[i])) == string::npos && isalpha(word[i-1]) && !isvowel(word[i-1])) {
            return string(1, word[i]);
        }
    }
    return "";
}