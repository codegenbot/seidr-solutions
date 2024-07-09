Here's the modified code:

```c
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    vector<int> code_count(6, 0);
    vector<int> guess_count(6, 0);

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code_count[code[i] - 'A']++;
            guess_count[guess[i] - 'A']++;
        } else {
            code_count[code[i] - 'A']++;
            guess_count[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 6; i++) {
        if (code_count[i] > 0 && guess_count[i] > 0) {
            white += min(code_count[i], guess_count[i]);
        }
    }

    return black + white;
}