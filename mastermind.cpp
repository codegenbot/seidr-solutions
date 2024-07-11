#include <vector>
#include <string>

int mastermindCodeMaster(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    vector<int> codeCount(6);
    for (char c : code) {
        codeCount[c - 'A']++;
    }

    vector<int> guessCount(6);
    for (char c : guess) {
        guessCount[c - 'A']++;
    }

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
            codeCount[code[i] - 'A]--;
            guessCount[guess[i] - 'A]--;
        }
    }

    for (char c : guess) {
        if (guessCount[c - 'A'] > 0 && codeCount[c - 'A'] > 0) {
            whitePegs++;
            codeCount[c - 'A]--;
            guessCount[c - 'A]--;
        }
    }

    return {blackPegs, whitePegs};
}