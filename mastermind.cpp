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
        codeCount[c - '0']++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            int count = codeCount[guess[i] - '0'];
            black += (count > 0);
            codeCount[guess[i] - '0']--;
        }
    }

    return white + black;
}