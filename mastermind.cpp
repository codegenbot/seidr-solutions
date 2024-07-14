int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Check for black pegs (correct color, correct place)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Check for white pegs (correct color, wrong place)
    int codeCount[6] = {0};
    for (char c : code) {
        codeCount[c - 'A']++;
    }
    for (char c : guess) {
        if (code.find(c) != std::string::npos && codeCount[c - 'A'] > 0) {
            white++;
            codeCount[c - 'A']--;
        }
    }

    return black + white;