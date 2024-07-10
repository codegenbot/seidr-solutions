#include <vector>
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong places
    vector<int> colorCount(6, 0);
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            colorCount[code[i] - 'A']++;
        }
    }

    // Count the number of correct colors in correct places
    int remainingGuess[6] = {0};
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            remainingGuess[code[i] - 'A']++;
        }
    }

    // Count the number of white pegs
    for (int i = 0; i < 6; i++) {
        white += min(colorCount[i], remainingGuess[i]);
    }

    return black + white;
}