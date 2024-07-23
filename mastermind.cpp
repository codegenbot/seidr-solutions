int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;
    int codeCount[6] = {0};

    // Count the occurrences of each character in the code
    for (char c : code) {
        codeCount[c - '0']++;
    }

    // Count the black pegs (correct color, correct place)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            codeCount[guess[i] - '0']--;
        }
    }

    // Count the white pegs (correct color, wrong place)
    int guessCount[6] = {0};
    for (char c : guess) {
        guessCount[c - '0']++;
    }
    for (int i = 0; i < 6; ++i) {
        white += min(codeCount[i], guessCount[i]);
    }

    return black + white;
}