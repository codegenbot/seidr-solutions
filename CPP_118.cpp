#include <string>
#include <algorithm>

using namespace std;

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if ("aeiouAEIOU".find(word[i]) != string::npos) {
            for (int j = i - 1; j >= 0; --j) {
                if (!("aeiouAEIOU").find(word[j])) break;
                if (!isalpha(word[j])) return word.substr(i, 1);
            }
            return word.substr(i, 1);
        }
    }
    return "";
}