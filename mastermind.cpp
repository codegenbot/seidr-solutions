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
    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == remainingGuess[i]) {
                count++;
            }
        }
        if (count > 0) {
            result.white += count - 1; 
        }
    }

    return result;
}