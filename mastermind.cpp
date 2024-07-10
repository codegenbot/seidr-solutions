int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors in wrong places
    vector<int> codeCount(6, 0);
    vector<int> guessCount(6, 0);
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }

    // Count correct colors in correct places
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count correct colors in wrong places
    for (int i = 0; i < 6; i++) {
        int count = min(codeCount[i], guessCount[i]);
        white += count;
    }

    return make_tuple(white, black);
}