#include <string>
#include <unordered_map>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    unordered_map<char, int> codeCount;
    for (char c : code) {
        codeCount[c]++;
    }

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeCount[guess[i]]--;
        }
    }

    for (int i = 0; i < 6; i++) {
        char c = 'A' + i;
        int count = 0;
        for (int j = 0; j < 4; j++) {
            if (guess[j] == c) {
                count++;
                codeCount[c]--;
            }
        }
        white += min(count, codeCount[c]);
    }

    return black;
}