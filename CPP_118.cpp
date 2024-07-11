#include <string>
#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    string result = "";
    for (int i = word.length() - 2; i >= 1; --i) {
        if (!isalpha(word[i])) continue;
        if (!isalpha(word[i-1])) continue;
        if ("aeiouAEIOU".find(tolower(word[i])) != string::npos) {
            result = word.substr(i);
            break;
        }
    }
    return result;
}