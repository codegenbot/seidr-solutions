#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int is_bored(string S) {
    int count = 0;
    bool is_sentence_start = true;

    for (int i = 0; i < S.length(); i++) {
        if (is_sentence_start && S[i] == 'I') {
            count++;
        }
        if (S[i] == '.' || S[i] == '?' || S[i] == '!') {
            is_sentence_start = true;
        } else {
            is_sentence_start = false;
        }
    }

    return count;
}

int main() {
    assert(is_bored("You and I are going for a walk") == 0);
    assert(is_bored("Hey! I am bored. Do you want to play a game?") == 2);
    assert(is_bored("I am feeling happy. How about you?") == 1);

    return 0;
}