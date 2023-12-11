#include <iostream>
#include <string>

using namespace std;

int is_bored(string S) {
    int count = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'I') {
            count++;
        }
    }
    return count;
}