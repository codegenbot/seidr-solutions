#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i > 0; i--) {
        if ("aeiouAEIOU".find(word[i]) != string::npos) {
            for (int j = i - 1; j >= 0; j--) {
                if (!("aeiouAEIOU").find(word[j])) continue;
                return word.substr(j, i - j);
            }
        }
    }
    return "";
}