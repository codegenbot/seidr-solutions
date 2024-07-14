#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in the wrong places
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count the number of correct colors in the right places
    int code_count[6] = {0};
    for (int i = 0; i < 4; i++) {
        code_count[guess[i] - '0']++;
    }
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else if (code_count[guess[i] - '0'] > 0) {
            white++;
            code_count[guess[i] - '0']--;
        }
    }

    return black + white;
}