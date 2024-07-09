#include <vector>
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in the wrong place (white pegs)
    vector<int> code_counts(6, 0);
    for (char c : code) {
        code_counts[c - 'A']++;
    }
    for (int i = 0; i < 4; i++) {
        if (code[i] != guess[i]) {
            for (char c = 'A'; c <= 'F'; c++) {
                if (guess[i] == c && code_counts[c - 'A']) {
                    white++;
                    code_counts[c - 'A']--;
                    break;
                }
            }
        }
    }

    // Count the number of correct colors in the right place (black pegs)
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    return {black, white};
}