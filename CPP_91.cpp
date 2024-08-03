#include <stdio.h>
#include <string>
using namespace std;

int is_bored(string S) {
    int count = 0;
    string sentence;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '.' || S[i] == '?' || S[i] == '!') {
            sentence = S.substr(0, i);
            if (sentence.find("I") != string::npos) {
                count++;
            }
            S.erase(0, i + 1);
            i = -1;
        }
    }
    return count;
}