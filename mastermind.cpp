#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : unique({guess[0], guess[1], guess[2], guess[3]})) {
        int countCode = 0;
        int countGuess = 0;
        for (int i = 0; i < 4; ++i) {
            if (code[i] == c) {
                countCode++;
            }
            if (guess[i] == c) {
                countGuess++;
            }
        }

        if (countCode > 0 && countGuess > 0) {
            black = min(black, 4);
            black -= countGuess;
        } else if (countCode > 0) {
            white += min(4 - countCode, countGuess);
        } else {
            white += countGuess;
        }
    }

    return white + black;
}