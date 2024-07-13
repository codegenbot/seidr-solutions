#include <string>

int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;
    int code_counts[6] = {0};
    for (char c : code) {
        code_counts[c - 'A']++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            int count = code_counts[guess[i] - 'A'];
            white += --count;
            if (count > 0) {
                code_counts[guess[i] - 'A']--;
            }
        }
    }

    return black + white;
}