#include <string>
#include <algorithm>

using namespace std;

bool isvowel(char c) {
    string vowels = "aeiouAEIOU";
    return vowels.find(to_string(1,c)) != string::npos;
}

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isvowel(word[i])) {
            for (char c : "aeiouAEIOU") {
                if (c == tolower(word[i])) {
                    return string(1, word[i]);
                }
            }
        }
    }
    return "";
}