#include <stdio.h>
#include <string>
using namespace std;

int is_bored(string S) {
    int boredomCount = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == ' ' || S[pos + 1] == '.' || S[pos + 1] == '?' || S[pos + 1] == '!') {
            boredomCount++;
        }
        pos += 1;
    }
    return boredomCount;
}