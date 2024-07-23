int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count the number of black pegs (correct color and correct place)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count the number of white pegs (correct color, wrong place)
    int code_counts[6] = {0};
    for (char c : code) {
        code_counts[c - 'a']++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            continue;
        }
        if (code_counts[guess[i] - 'a']) {
            white++;
            code_counts[guess[i] - 'a']--;
        }
    }

    return black + white;
}