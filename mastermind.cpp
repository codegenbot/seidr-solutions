int mastermind(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    int codeCounts[6] = {0}, guessCounts[6] = {0};

    for (char c : code) {
        ++codeCounts[c];
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else if (guessCounts[guess[i]]-- > 0) {
            --codeCounts[guess[i]];
            ++whitePegs;
        }
    }

    for (int i = 0; i < 6; ++i) {
        whitePegs += codeCounts[i];
    }

    return blackPegs * 2 + whitePegs;
}