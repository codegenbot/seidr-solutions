#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> codeCount;
    map<char, int> guessCount;
    
    for (char c : code) {
        codeCount[c]++;
    }
    for (char c : guess) {
        guessCount[c]++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black--;
        } else if (codeCount[guess[i]] > 0) {
            white++;
            codeCount[guess[i]]--;
        }
    }

    for (char c : guess) {
        if (codeCount[c] > 0 && guessCount[c] > 1) {
            black += min(codeCount[c], guessCount[c]) - 1;
        } else if (codeCount[c] > 0) {
            white += codeCount[c];
        }
    }

    return white + black;
}