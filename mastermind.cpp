#include <string>

int mastermind(const char* code, const char* guess) {
    int black = 0;
    int white = 0;

    // Count correct positions (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count correct colors (white pegs)
    bool code_counts[6] = {false};
    int correct_colors = 0;
    for (char c : code) {
        code_counts[c - 'A'] = true;
        int count = 0;
        for (char d : guess) {
            if (d == c) ++count;
        }
        if (count > 1) continue; 
        correct_colors++;
    }

    white = correct_colors;

    return black + white;
}