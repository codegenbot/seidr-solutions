#include <string>
#include <vector>
#include <algorithm>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    vector<char> code_chars(code.begin(), code.end());
    vector<char> guess_chars(guess.begin(), guess.end());

    for (char c : guess_chars) {
        if (count(code_chars.begin(), code_chars.end(), c) > 0) {
            white++;
            auto it = remove(code_chars.begin(), code_chars.end(), c);
            code_chars.erase(it, code_chars.end());
        }
    }

    return black + white;
}