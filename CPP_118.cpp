#include <string>
#include <algorithm>

using namespace std;

string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 2; i > 0; i--) {
        char c = word[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            word[i - 1] != 'a' && word[i - 1] != 'e' && word[i - 1] != 'i' && word[i - 1] != 'o' && word[i - 1] != 'u' &&
            word[i + 1] != 'a' && word[i + 1] != 'e' && word[i + 1] != 'i' && word[i + 1] != 'o' && word[i + 1] != 'u') {
            return string(1, c);
        }
    }
    return "";
}