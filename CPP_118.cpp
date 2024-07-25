#include <string>
#include <algorithm>

using namespace std;

bool isvowel(char c) {
    string vowels = "aeiouAEIOU";
    return vowels.find(to_string(1)) != string::npos;
}

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (isalpha(word[i-1]) && !isvowel(word[i-1])) {
            return string(1, word[i]);
        }
    }
    return "";
}