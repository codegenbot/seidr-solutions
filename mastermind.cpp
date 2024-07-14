#include <map>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;
    std::map<char, int> codeCount;

    if (code.length() != 4 || guess.length() != 4) {
        return -1; 
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : code) {
        codeCount[c]++;
    }
    for (char c : guess) {
        if (code.find(c) != std::string::npos && codeCount[c] > 0) {
            black++;
            codeCount[c]--;
        } else if (std::string::npos != code.find(c)) {
            white++;
        }
    }

    return black + white;
}