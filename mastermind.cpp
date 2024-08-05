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
    int guess_count[6] = {0};

    for (char c : code) {
        code_count[c - 'A']++;
    }
    for (char c : guess) {
        guess_count[c - 'A']++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            if (guess_count[code[i] - 'A'] > 0 && code_count[code[i] - 'A'] > 1) {
                white++;
            } else {
                black++;
            }
            --guess_count[code[i] - 'A'];
            --code_count[code[i] - 'A'];
        }
    }

    // Count remaining pegs
    for (int i = 0; i < 6; ++i) {
        if (code_count[i]) {
            white += code_count[i];
        }
        if (guess_count[i]) {
            black += guess_count[i];
        }
    }

    return white + black;
}