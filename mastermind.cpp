#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in the wrong places
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = 'X';
            guess[i] = 'X';
        }
    }

    // Count the number of correct colors in the right places
    int codeCount[6] = {0};
    for (int i = 0; i < 4; i++) {
        codeCount[code[i] - '0']++;
    }
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else if (codeCount[guess[i] - '0'] > 0) {
            white++;
            codeCount[guess[i] - '0']--;
        }
    }

    return black;
}