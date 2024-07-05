#include<stdio.h>
#include<string>
using namespace std;

int is_bored(string S) {
    int count = 0;
    bool sentence_start = true;
    
    for (char c : S) {
        if (sentence_start && c == 'I') {
            count++;
            sentence_start = false;
        }
        
        if (c == '.' || c == '?' || c == '!') {
            sentence_start = true;
        } else if (c != ' ') {
            sentence_start = false;
        }
    }
    
    return count;
}