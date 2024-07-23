#include <iostream>
#include <string>
#include <vector>

std::pair<int, int> calculatePegs(const std::string& code, const std::string& guess) {
    std::vector<int> codeFreq(6, 0);
    int whitePegs = 0, blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i] - 'A']++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && codeFreq[code[i] - 'A'] > 0) {
            whitePegs++;
            codeFreq[code[i] - 'A']--;
        }
    }

    return {whitePegs, blackPegs};
}