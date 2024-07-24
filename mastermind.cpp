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
    int i = 0;
    while (i < 4) {
        if (code[i] == guess[i]) {
            black++;
            code_count[guess[i]]--;
            guess_count[guess[i]]--;
            i++;
        } else {
            i++;
        }
    }

    // Count remaining characters in the code that are not in the guess
    for (auto& pair : code_count) {
        while (pair.second > 0 && !contains(guess, pair.first)) {
            pair.second--;
        }
    }

    // Count white pegs (correct color, wrong place)
    for (int i = 0; i < 4; i++) {
        if (code[i] != guess[i]) {
            for (int j = 0; j < 6; j++) {
                char c = 'A' + j;
                if (guess[j] == c && code_count[c] > 0) {
                    white++;
                    code_count[c]--;
                    break;
                }
            }
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