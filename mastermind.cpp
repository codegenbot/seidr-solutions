#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    map<char, int> codeCount;
    map<char, int> guessCount;

    // Count the number of occurrences for each character in the code and the guess
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }

    // Count the number of correct colors in right positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count the number of correct colors in wrong positions
    for (char c = 'A'; c <= 'F'; ++c) {
        if (codeCount[c] > 0 && guessCount[c] > codeCount[c] - black) {
            white += min(codeCount[c], guessCount[c] - (black == 1));
        }
    }

    return white, black;
}