int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    // Count black pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = '-';
            guess[i] = '-';
        }
    }

    // Count remaining correct colors at wrong positions
    map<char, int> codeCount;
    for (int i = 0; i < 4; i++) {
        codeCount[code[i]]++;
    }

    for (int i = 0; i < 4; i++) {
        if (guess[i] != '-' && codeCount[guess[i]] > 0) {
            white++;
            codeCount[guess[i]]--;
        }
    }

    return black + white;
}