#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors in wrong places (white pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            white++;
        }
    }

    // Count correct colors in correct places (black pegs)
    map<char, int> code_map;
    for (char c : code) {
        code_map[c]++;
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else if (code_map[guess[i]] > 0) {
            black++;
            code_map[guess[i]]--;
        }
    }

    return white + black;
}