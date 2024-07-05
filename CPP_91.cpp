#include<stdio.h>
#include<string>
using namespace std;

int is_bored(string S) {
    int count = 0;
    bool new_sentence = true;
    for (char c : S) {
        if (new_sentence && c == 'I') {
            count++;
            new_sentence = false;
        }
        if (c == '.' || c == '?' || c == '!') {
            new_sentence = true;
        }
    }
    return count;
}