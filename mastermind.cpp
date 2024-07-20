#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    int codeCount[6] = {0};
    int guessCount[6] = {0};

    // Count the occurrences of each character in the code and guess
    for(int i=0; i<4; i++) {
        codeCount[code[i]-'0']++;
        guessCount[guess[i]-'0']++;
    }

    // Calculate the number of black pegs (correct color, correct place)
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
            codeCount[code[i]-'0']--;
            guessCount[guess[i]-'0']--;
        }
    }

    // Calculate the number of white pegs (correct color, wrong place)
    for(int i=0; i<6; i++) {
        if(codeCount[i] > 0 && guessCount[i] > 0) {
            white += min(codeCount[i], guessCount[i]);
        }
    }

    return black + white;
}