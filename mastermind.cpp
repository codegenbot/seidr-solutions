#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors in wrong places (white pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            white++;
        }
    }

    // Count correct colors in correct places (black pegs)
    map<char, int> codeCount;
    for (char c : code) {
        codeCount[c]++;
    }

    for (int j = 0; j < 4; ++j) {
        if (code[j] == guess[j]) {
            black++;
        } else if (codeCount[guess[j]] > 0) {
            white++;
            codeCount[guess[j]]--;
        }
    }

    return white + black;
}