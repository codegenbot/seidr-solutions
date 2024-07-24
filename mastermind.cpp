#include <vector>
#include <iostream>
#include <string>

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    vector<int> codeCount(6, 0);
    vector<int> guessCount(6, 0);

    for (char c : code) {
        codeCount[c - '0']++;
    }

    for (int i = 0; i < 4; i++) {
        char c = guess[i];
        if (c == code[i]) {
            blackPegs++;
        } else {
            codeCount[c - '0]--;
            guessCount[c - '0']++;
        }
    }

    for (int i = 0; i < 6; i++) {
        whitePegs += min(codeCount[i], guessCount[i]);
    }

    return blackPegs;
}