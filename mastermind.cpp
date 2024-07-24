#include <string>
#include <map>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    map<char, int> code_count;
    map<char, int> guess_count;

    // Count occurrences of each character in the code and guess
    for (char c : code) {
        code_count[c]++;
    }
    for (char c : guess) {
        guess_count[c]++;
    }

    // Count black pegs (correct color, correct place)
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count white pegs (correct color, wrong place)
    for (char c : guess) {
        if (code_count[c] > 0) {
            code_count[c]--;
            white++;
        }
    }

    return black * 4 + white;
}

bool contains(string s, char c) {
    for (char ch : s) {
        if (ch == c) {
            return true;
        }
    }
    return false;
}