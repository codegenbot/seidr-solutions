#include <string>
#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i >= 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
            word[i] == 'U') {
            for (int j = i + 1; j < word.size(); ++j) {
                if (!isalpha(word[j])) break;
            }
            for (int k = i - 1; k >= 0; --k) {
                if (!isalpha(word[k])) break;
            }
            return string(1, word[i]);
        }
    }
    return "";
}