#include <string>

struct PegCounts { int white; int black; };

PegCounts mastermind(string code, string guess) {
    PegCounts result = {0, 0};
    string remainingGuess = guess;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            result.black++;
            remainingGuess[i] = ' ';
        }
    }

    // Count white pegs
    int count[6] = {0};
    for (int i = 0; i < 4; ++i) {
        if (remainingGuess[i] != ' ') {
            for (int j = 0; j < 4; ++j) {
                if (code[j] == remainingGuess[i]) {
                    count[code.find(remainingGuess[i])]++;
                }
            }
        }
    }

    for (int i = 0; i < 6; ++i) {
        if (count[i] > 0) {
            result.white += count[i];
            while (count[i]-- > 0) {
                remainingGuess.replace(remainingGuess.find(char(i + 96)), 1, " ");
            }
        }
    }

    return result;
}