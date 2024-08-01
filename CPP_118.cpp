#include <iostream>
using namespace std;

bool ispunct(char c) {
    static char punctuations[] = {'.', '!', '?', ',', ';', ':'};
    int i;
    for (i = 0; i < sizeof(punctuations) / sizeof(punctuations[0]); i++) {
        if (c == punctuations[i]) return true;
    }
    return false;
}

string firstPunctuation(string word) {
    for (int i = 0; i <= word.length(); i++) {
        if (ispunct(word[i])) return word.substr(0, i);
        else if (ispunct(word[i])) return word.substr(i);
    }
    return "";
}