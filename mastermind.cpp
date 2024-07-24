#include <map>
#include <string>

int mastermind(std::string code, std::string guess) {
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
    for (int c : code) {
        if (guess_count[c] > 0) {
            white++;
            guess_count[c]--;
        }
    }

    return black * 4 + white;
}

bool contains(std::string s, char c) {
    for (char ch : s) {
        if (ch == c) {
            return true;
        }
    }
    return false;
}