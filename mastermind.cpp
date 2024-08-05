#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    map<char, int> code_count;
    map<char, int> guess_count;

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' ';
            guess[i] = ' ';
        } else {
            code_count[code[i]]++;
            guess_count[guess[i]]++;
        }
    }

    // Count the number of correct colors in right positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            code_count[code[i]]--;
            guess_count[guess[i]]--;
        }
    }

    // Count the remaining correct colors in wrong positions
    for (map<char, int>::iterator it = code_count.begin(); it != code_count.end(); ++it) {
        white += min(it->second, guess_count[it->first]);
    }

    return white, black;