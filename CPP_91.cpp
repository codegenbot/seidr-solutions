#include<stdio.h>
#include<string>
using namespace std;

int is_bored(string S) {
    int count = 0;
    bool newSentence = true;

    for (char c : S) {
        if (newSentence && c == 'I') {
            count++;
            newSentence = false;
        }
        if (c == '.' || c == '?' || c == '!') {
            newSentence = true;
        } else if (c != ' ') {
            newSentence = false;
        }
    }

    return count;
}