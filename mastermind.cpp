#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    map<char,int> code_count;
    map<char,int> guess_count;
    
    // Count the occurrences of each character in the code and the guess
    for (char c : code) {
        code_count[c]++;
    }
    for (char c : guess) {
        guess_count[c]++;
    }

    // Count correct colors in wrong places (white pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            code_count[code[i]]--;
            guess_count[guess[i]]--;
            white++;
        }
    }

    // Count correct colors in correct places (black pegs)
    for (char c : code) {
        if (code_count[c] > 0 && guess_count[c] > 0) {
            code_count[c]--;
            guess_count[c]--;
            black++;
        }
    }

    return white + black;
}