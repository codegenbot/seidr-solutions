#include <string>
#include <algorithm>

using namespace std;

string get_closest_vowel(string word) {
    for (int i = word.length() - 2; i >= 1; --i) {
        if (!isalpha(word[i])) continue;
        if (!isalpha(word[i-1]) || !isalpha(word[i+1])) break;
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' ||
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' ||
            word[i] == 'U') {
            return string(1, word[i]);
        }
    }
    return "";
}