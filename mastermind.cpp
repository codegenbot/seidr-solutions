#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    map<char, int> codeCount;
    map<char, int> guessCount;

    for (char c : code) {
        codeCount[c]++;
    }

    for (char c : guess) {
        guessCount[c]++;
    }

    // Count correct colors in wrong places (white pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else if (codeCount[guess[i]] > 0) {
            white++;
            codeCount[guess[i]]--;
        }
    }

    // Count correct colors in correct places (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    return white + black;
}