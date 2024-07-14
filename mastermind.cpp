int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    // Count black pegs (correct color and correct position)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
            code[i] = ' '; // mark as used
            guess[i] = ' '; // mark as used
        }
    }

    // Count white pegs (correct color, wrong position)
    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i]) {
                count++;
                code[j] = ' '; // mark as used
            }
        }
        whitePegs += min(count, blackPegs);
    }

    return blackPegs + whitePegs;
}