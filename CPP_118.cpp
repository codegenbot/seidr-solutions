#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word) {
    int i = word.size() - 1;
    while (i > 0 && !isvowel(word[i])) {
        i--;
    }
    if (i == 0) return "";
    for (; i >= 0 && !isvowel(word[i]); i--) {}
    return string(1, tolower(word[i]));
}

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}