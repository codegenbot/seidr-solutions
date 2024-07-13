#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the occurrences of each character in the guess string
    vector<int> guessCount(6, 0);
    for(int i = 0; i < 4; i++) {
        guessCount[guess[i] - '0']++;
    }

    // Calculate the number of black pegs (correct color, correct place)
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            code[i] = 'x';
            guess[i] = 'x';
            black++;
        }
    }

    // Calculate the number of white pegs (correct color, wrong place)
    for(int i = 0; i < 4; i++) {
        if(code[i] != guess[i]) {
            for(int j = 0; j < 6; j++) {
                if(guessCount[j] > 0 && code[i] == '0' + j) {
                    white++;
                    guessCount[j]--;
                    break;
                }
            }
        }
    }

    return black + white;
}