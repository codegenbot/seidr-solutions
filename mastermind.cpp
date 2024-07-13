int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    // Count white pegs
    vector<char> codeArray(code.begin(), code.end());
    vector<char> guessArray(guess.begin(), guess.end());

    for (int i = 0; i < 4; ++i) {
        char c = 'a';
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (guessArray[j] == c) {
                count++;
            }
        }
        for (int j = 0; j < 4; ++i) {
            if (codeArray[i] == c && codeArray[i] != guessArray[i]) {
                whitePegs += count;
            }
        }
        c++;
    }

    return blackPegs << 2 | whitePegs;
}