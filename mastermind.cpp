#include <string>
#include <map>

std::pair<int, int> mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    std::map<char, int> codeCount;
    std::map<char, int> guessCount;
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }
    for (int i = 0; i < 6; ++i) {
        if (codeCount[i] > 0 && codeCount[i] != guessCount[i]) {
            white += codeCount[i] - guessCount[i];
        }
    }

    int codeIndex = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            codeIndex = i + 1;
        }
    }

    return make_pair(white, black);
}