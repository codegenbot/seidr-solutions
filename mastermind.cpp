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
    std::unordered_set<char> codeCopy(code.begin(), code.end());
    for (int i = 0; i < 4; ++i) {
        if (codeCopy.count(guess[i]) > 0) {
            whitePegs++;
            codeCopy.erase(guess[i]);
        }
    }

    return blackPegs << 2 | whitePegs;
}