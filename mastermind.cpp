#include <algorithm>
#include <unordered_map>

int mastermind(const string& code, const string& guess) {
    int white = 0;
    int black = 0;

    unordered_map<char, int> code_count, guess_count;

    // Count characters in the code and guess
    for (char c : code) {
        ++code_count[c];
    }
    for (char c : guess) {
        ++guess_count[c];
    }

    // Compare counts to find white pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else if (guess_count[code[i]] > 0) {
            ++white;
            --guess_count[code[i]];
        }
    }

    return black + white - 2;
}