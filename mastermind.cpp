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

    int temp_counts[6] = {0};
    for (int i = 0; i < 4; ++i) {
        temp_counts[guess[i] - 'A']++;
    }

    for (int i = 0; i < 6; ++i) {
        white -= (code_counts[i] - temp_counts[i]);
    }
    return black + white;
}