#include <vector>
#include <iostream>
#include <string>

int masterMind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    // Count black pegs (correct color and position)
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
            code[i] = '-';
            guess[i] = '-';
        }
    }

    // Count white pegs (correct color, wrong position)
    for (int i = 0; i < 4; i++) {
        int correctColorCount = 0;
        for (int j = 0; j < 4; j++) {
            if (code[j] == guess[i]) {
                correctColorCount++;
            }
        }
        if (correctColorCount > 0) {
            whitePegs += min(correctColorCount, 1);
        }
    }

    return blackPegs << 2 | whitePegs;
}