#include <vector>
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' '; // Mark as checked
            guess[i] = ' ';
        }
    }

    // Count the number of correct colors in correct positions
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            white++;
        } else if (count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
            code[i] = ' '; // Mark as checked
            count(guess.begin(), guess.end(), code[i]) = 0;
        }
    }

    return black + white;
}