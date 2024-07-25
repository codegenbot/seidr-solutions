#include <stdio.h>
#include <string>
using namespace std;

int is_bored(string S) {
    int count = 0;
    string word;
    for (char c : S) {
        if (c == '.' || c == '?' || c == '!') {
            if (!word.empty() && word[0] == 'I')
                count++;
            word.clear();
        } else {
            word += c;
        }
    }
    return count;
}