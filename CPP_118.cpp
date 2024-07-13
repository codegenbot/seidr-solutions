#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    for(int i = word.length() - 1; i > 0; --i) {
        if(vowel(word[i])) {
            int j = i;
            while(j > 0 && !consonant(word[j-1]))
                --j;
            return word.substr(j, i-j);
        }
    }
    return "";
}

bool vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool consonant(char c) {
    return (!vowel(c));
}