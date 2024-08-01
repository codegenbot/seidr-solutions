#include <algorithm>
#include <string>

using namespace std;

string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i >= 0; --i) {
        if ("aeiouAEIOU".find(word[i]) != string::npos) {
            int left = i + 1;
            while (left < word.length() && !("aeiouAEIOU".find(word[left]) != string::npos)) {
                ++left;
            }
            if (left - 1 > i) {
                return string(1, word[i]);
            }
        }
    }
    return "";
}