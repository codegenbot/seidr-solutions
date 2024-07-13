#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    char codeArray[5], guessArray[5];
    strcpy(codeArray, code.c_str());
    strcpy(guessArray, guess.c_str());

    for (int i = 0; i < 4; i++) {
        if (codeArray[i] == guessArray[i]) {
            black++;
        }
    }

    int codeCount[6] = {0};
    int guessCount[6] = {0};

    for (int i = 0; i < 4; i++) {
        codeCount[codeArray[i]-'0']++;
        guessCount[guessArray[i]-'0']++;
    }

    for (int i = 0; i < 6; i++) {
        if (codeCount[i] > 0 && guessCount[i] > 0) {
            white += min(codeCount[i], guessCount[i]);
        }
    }

    return black, white;
}