#include <string>
#include <algorithm>

using namespace std;

string get_closest_vowel(string word) {
    string res = "";
    for (int i = word.size() - 1; i > 0; i--) {
        if (ispunct(word[i])) continue;
        if (!isalpha(word[i])) break;
        if ("aeiouAEIOU".find( tolower(word[i])) != string::npos) {
            res = word[i];
            break;
        }
    }
    return res;
}