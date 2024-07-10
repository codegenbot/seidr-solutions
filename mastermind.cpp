#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> codeMap;
    map<char, int> guessMap;

    for (int i = 0; i < 4; i++) {
        codeMap[code[i]]++;
        guessMap[guess[i]]++;
    }

    for (auto it = codeMap.begin(); it != codeMap.end(); it++) {
        if (it->second > 0 && guessMap[it->first] > 0) {
            white += min(it->second, guessMap[it->first]);
        }
    }

    return black + white;
}