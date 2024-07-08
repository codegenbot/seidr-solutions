#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    std::vector<char> code_chars(code.begin(), code.end());
    std::vector<char> guess_chars(guess.begin(), guess.end());

    for (char c : guess_chars) {
        if (std::count(code_chars.begin(), code_chars.end(), c) > 0) {
            white++;
            code_chars.erase(std::remove(code_chars.begin(), code_chars.end(), c), code_chars.end());
        }
    }

    return black + white;
}