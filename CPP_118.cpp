#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    int n = word.length();
    for(int i = n - 1; i > 0; i--) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            return string(1, word[i]);
        }
    }
    return "";
}