#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word) {
    int i = 0;
    while (i < word.size()) {
        if (!isalpha(word[i])) {
            break;
        }
        i++;
    }
    for (; i < word.size(); i++) {
        if (ispunct(word[i]) || isdigit(word[i])) {
            break;
        }
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' ||
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' ||
            word[i] == 'U') {
            return string(1, word[i]);
        }
    }
    return "";
}