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
    int code_count[6] = {0};
    for (char c : code) {
        code_count[c - 'A']++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            int count = code_count[guess[i] - 'A'];
            code_count[guess[i] - 'A']--;
            if (count > 0) {
                black++;
            }
        }
    }

    return white + black;
}