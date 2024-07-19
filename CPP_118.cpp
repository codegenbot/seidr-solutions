#include <string>
#include <algorithm>

using namespace std;

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if ("aeiouAEIOU".find(word[i]) != string::npos && 
            isalpha(word[i-1]) && !("aeiouAEIOU".find(word[i-1]) != string::npos)) {
            return string(1, word[i]);
        }
    }
    return "";
}