#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    int codeCount[7] = {0};
    for (char c : code) {
        codeCount[c - 'A']++;
    }
    for (char c : guess) {
        if (code.find(c) != std::string::npos && codeCount[c - 'A'] > 0) {
            white++;
            codeCount[c - 'A']--;
        }
    }

    return black + white;