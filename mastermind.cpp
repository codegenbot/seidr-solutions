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
            codeArray[i] = 'x';
            guessArray[i] = 'x';
        }
    }

    int codeCount[6] = {0};
    for (int i = 0; i < 4; i++) {
        codeCount[(int)codeArray[i]]++;
    }

    for (int i = 0; i < 4; i++) {
        if (codeArray[i] == guessArray[i]) {
            black--;
            white++;
        } else if (codeCount[(int)guessArray[i]] > 0) {
            codeCount[(int)guessArray[i]]--;
            white++;
        }
    }

    return black, white;
}