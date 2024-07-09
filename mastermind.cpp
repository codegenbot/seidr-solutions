#include <string>

int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    // Count the number of correct colors in the correct places
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        }
    }

    // Count the number of correct colors in incorrect positions
    for (char c : code) {
        int count = 0;
        for (int i = 0; i < 4; ++i) {
            if (guess[i] == c && code[i] != c) {
                ++count;
            }
        }
        white += count;
    }

    // Subtract the number of correct colors in the correct places
    white -= black;

    return {white, black};
}