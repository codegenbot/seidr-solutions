#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i >= 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' ||
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' ||
            word[i] == 'U') {
            for (int j = i - 1; j >= 0; --j) {
                if (!isvowel(word[j])) {
                    return string(1, word[i]);
                }
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}