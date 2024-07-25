#include <string>
#include <algorithm>

using namespace std;

bool isvowel(char c) {
    string vowels = "aeiouAEIOU";
    return vowels.find(string(1,c)) != string::npos;
}

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if ("aeiouAEIOU".find(string(1,word[i])) == string::npos && isalpha(word[i-1]) && !isvowel(word[i-1])) {
            return string(1, word[i]);
        }
    }
    return "";
}