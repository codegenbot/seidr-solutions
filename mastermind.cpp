int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Count the number of correct colors in wrong positions
    map<char, int> codeCount, guessCount;
    for (char c : code) {
        codeCount[c]++;
    }
    for (int i = 0; i < 4; i++) {
        char c = guess[i];
        if (codeCount[c] > 0 && code.find(c) != string::npos) {
            whitePegs++;
            codeCount[c]--;
        }
    }

    // Count the number of correct colors in correct positions
    for (int i = 0; i < 4; i++) {
        char c = guess[i];
        if (c == code[i]) {
            blackPegs++;
        }
    }

    return blackPegs + whitePegs;
}