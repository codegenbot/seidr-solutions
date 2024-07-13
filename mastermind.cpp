#include <vector>
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    vector<int> codeCount(6, 0);
    vector<int> guessCount(6, 0);

    for (char c : code) {
        codeCount[c - 'A']++;
    }

    for (int i = 0; i < 4; i++) {
        char c = guess[i];
        if (c == code[i]) {
            black++;
            codeCount[c - 'A]--;
            guessCount[c - 'A]--;
        } else {
            guessCount[c - 'A']--;
        }
    }

    for (int i = 0; i < 6; i++) {
        white += min(codeCount[i], guessCount[i]);
    }

    return black << 1 | white;
}