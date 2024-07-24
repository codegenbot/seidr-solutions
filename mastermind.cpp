int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    // Count black pegs (correct color and correct place)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
            code.erase(i, 1);
            guess.erase(i, 1);
            --i;
        }
    }

    // Count white pegs (correct color but wrong place)
    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i]) {
                count++;
            }
        }
        whitePegs += min(count, 1);
    }

    return blackPegs + whitePegs;
}