#include <algorithm>
#include <string>

using namespace std;

string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i > 0; i--) {
        if ("aeiouAEIOU".find(word[i]) != string::npos) {
            return word.substr(i);
        }
    }
    return "";
}