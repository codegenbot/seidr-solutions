#include <algorithm>
#include <string>

using namespace std;

string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(tolower(word[i]))) return tolower(word.substr(i));
        if (!isalpha(word[i - 1])) break;
    }
    return "";
}