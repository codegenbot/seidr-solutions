#include <string>

int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    map<char, int> code_count;
    for (char c : code) {
        code_count[c]++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++; // Correct color, correct place - black peg
        } else {
            int count = code_count[guess[i]];
            if (count > 0) {
                white++;
                code_count[guess[i]]--; // Decrement the count
            }
        }
    }

    return black + white;
}