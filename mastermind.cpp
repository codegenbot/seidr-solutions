#include <vector>
#include <iostream>
#include <string>

int masterMind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Count white pegs
    vector<int> codeCount(6, 0);
    for (char c : code) {
        codeCount[c - 'A']++;
    }
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[guess[i] - 'A']--;
        }
    }

    // Count black pegs
    for (char c : code) {
        if (c == guess[c - 'A']) {
            blackPegs++;
        }
    }

    return {blackPegs, 4 - blackPegs};
}