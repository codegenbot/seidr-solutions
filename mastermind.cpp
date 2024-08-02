#include <string>
#include <algorithm>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : code) {
        auto pos = std::find_if(guess.begin(), guess.end(), [c](char ch) { return ch == c; });
        if (pos != guess.end()) {
            white++;
            guess.erase(pos);
        }
    }

    return black + white;
}