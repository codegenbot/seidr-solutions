#include <vector>
#include <iostream>
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors in wrong places (white pegs)
    vector<int> code_counts(6, 0);
    for (char c : code) {
        code_counts[c - 'A']++;
    }
    for (int i = 0; i < 4; i++) {
        char c = guess[i];
        if (code[i] == c) {
            white++;
        } else {
            code_counts[c - 'A']--;
        }
    }

    // Count correct colors in correct places (black pegs)
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            black++;
        }
    }

    return black + white;
}