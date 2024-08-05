#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' ';
            guess[i] = ' ';
        }
    }

    // Count the number of correct colors in right positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            white--;
        }
    }

    // Count the remaining correct colors in wrong positions
    int codeCount[6] = {0};
    int guessCount[6] = {0};
    
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i] - '0']++;
        guessCount[guess[i] - '0']++;
    }
    
    for (int i = 0; i < 6; ++i) {
        white += min(codeCount[i], guessCount[i]) - black;
    }

    return white, black;
}