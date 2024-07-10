#include <string>

struct PegCounts { int white; int black; };

PegCounts mastermind(std::string code, std::string guess) {
    PegCounts result = {0, 0};
    std::string remainingGuess = guess;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            result.black++;
            remainingGuess[i] = ' ';
        }
    }

    // Count white pegs
    int codeCount[256] = {0};
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
    }
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            codeCount[guess[i]]--;
            if (codeCount[guess[i]] == 0) {
                codeCount[guess[i]] = -1;
            }
        }
    }
    for (int i = 0; i < 4; ++i) {
        if (remainingGuess[i] != ' ') {
            while(codeCount[code[i]] <= 0 && code[i] != remainingGuess[i]) {
                code[i] = guess[i];
                break;
            }
            if (code[i] == guess[i]) {
                result.black++;
            } else {
                result.white++;
                codeCount[code[i]]--;
            }
        }
    }

    return result;
}