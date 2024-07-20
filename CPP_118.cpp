#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i > 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            if (all_of(word.begin(), word.end(), ::isalpha) &&
                all_of(word.begin(), i, ::isalpha) && !all_of(word.begin() + 1, i, ::isalpha)) {
                return string(1, word[i]);
            }
        }
    }
    return "";
}