int mastermind(std::string code, std::string guess) {
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
    int guess_counts[6] = {0};
    for (char c : code) {
        ++code_counts[c - 'A'];
    }
    for (char g : guess) {
        ++guess_counts[g - 'A'];
    }

    for (int i = 0; i < 6; ++i) {
        int min_count = std::min(code_counts[i], guess_counts[i]);
        white += min_count;
    }

    return black + white;
}