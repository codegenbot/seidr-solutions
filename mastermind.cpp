#include <string>

std::pair<int, int> mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    int codeCount[6] = {0};
    int guessCount[6] = {0};

    for (int i = 0; i < 4; ++i) {
        codeCount[code[i] - '0']++;
        guessCount[guess[i] - '0']++;
    }

    for (int i = 0; i < 6; ++i) {
        if (codeCount[i] > 0 && codeCount[i] != guessCount[i]) {
            white += codeCount[i] - guessCount[i];
        }
    }

    int correctIndex = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    return make_pair(white, black);
}