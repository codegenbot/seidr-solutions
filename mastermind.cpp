#include <string>

int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    // Count correct positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count correct colors, but wrong position
    int code_counts[6] = {0};
    int guess_counts[6] = {0};
    for (char c : code) {
        ++code_counts[c - 'A'];
    }
    for (char g : guess) {
        ++guess_counts[g - 'A'];
    }

    for (int i = 0; i < 6; ++i) {
        white += min(code_counts[i], guess_counts[i]);
    }

    return black + white;
}