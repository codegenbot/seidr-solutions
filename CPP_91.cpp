#include <iostream>
#include <string>
using namespace std;

int is_bored(string S);

int main() {
    assert(is_bored("You and I are going for a walk") == 0);
    // Add more test cases here

    return 0;
}

int is_bored(string S) {
    int count = 0;
    bool startOfSentence = true;

    for (int i = 0; i < S.length(); i++) {
        if (startOfSentence && S[i] == 'I') {
            count++;
            startOfSentence = false;
        }

        if (S[i] == '.' || S[i] == '?' || S[i] == '!') {
            startOfSentence = true;
        }
    }

    return count;
}