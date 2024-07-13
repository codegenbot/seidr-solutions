```cpp
int mastermind(const std::string& code, const std::string& guess) {
    int black = 0;
    int white = 0;

    // Count correct positions (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count correct colors (white pegs)
    int code_counts[6] = {0};
    for (int i = 0; i < 4; ++i) {
        code_counts[code[i] - 'A']++;
    }
    for (int i = 0; i < 6; ++i) {
        white += std::min(code_counts[i], std::count(guess.begin(), guess.end(), 'A' + i));
    }

    return black + white;
}