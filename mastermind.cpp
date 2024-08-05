#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors in wrong places (white pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            white++;
        }
    }

    // Count correct colors in correct places (black pegs)
    int codeCount[6] = {0};
    for (char c : code) {
        codeCount[c - 'A']++;
    }

    for (int j = 0; j < 4; ++j) {
        if (code[j] == guess[j]) {
            black++;
        } else {
            if (codeCount[guess[j] - 'A'] > 0) {
                codeCount[guess[j] - 'A]--;
                black++;
            }
        }
    }

    return white + black;
}