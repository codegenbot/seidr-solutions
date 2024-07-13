#include <string>
#include <algorithm>

using namespace std;

string get_closest_vowel(string word) {
    int i = word.length() - 1;
    while (i > 0 && !isVowel(word[i])) {
        i--;
    }
    if (i == 0) return "";
    for (; i >= 0; i--) {
        if (isVowel(word[i])) {
            return string(1, topper(word[i]));
        }
    }
    return "";

}

bool isVowel(char c) {
    c = topper(c);
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}