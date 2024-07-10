int mastermind(std::string code, std::string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
            code[i] = ' ';
            guess[i] = ' ';
        }
    }

    // Count white pegs
    std::vector<char> codeCopy(code.begin(), code.end());
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            bool existsInCode = false;
            for (char c : codeCopy) {
                if (c == guess[i]) {
                    existsInCode = true;
                    break;
                }
            }
            if (!existsInCode) whitePegs++;
        }
    }

    return blackPegs << 2 | whitePegs;
}