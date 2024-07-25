#include <string>
#include <algorithm>

using namespace std;

bool isvowel(char c) {
    string vowels = "aeiouAEIOU";
    return vowels.find(to_string(1,c)) != string::npos;
}

string get_closest_vowel(string word) {
    int n = word.size();
    string vowels = "aeiouAEIOU";
    for (int i = n - 1; i > 0; --i) {
        if (vowels.find(to_string(1,c)) == string::npos && isalpha(word[i-1]) && !isvowel(word[i-1])) {
            return to_string(c);
        }
    }
    return "";
}