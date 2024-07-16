#include <vector>
#include <iostream>
#include <string>

int mastermindCode(string code, string guess) {
    int black = 0;
    int white = 0;

    // Count black pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count remaining correct colors in the code
    int remainingBlack = 0;
    vector<int> colorCount(6, 0);
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            continue;
        }
        colorCount[code[i] - 'A']++;
    }

    // Count white pegs
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            continue;
        }
        colorCount[guess[i] - 'A']--;
        if (colorCount[guess[i] - 'A'] > 0) {
            white++;
        }
    }

    return black + white;
}