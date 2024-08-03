int getHint(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    vector<int> codeCount(6, 0);
    vector<int> guessCount(6, 0);

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
            codeCount[code[i] - 'A']--;
            guessCount[guess[i] - 'A']--;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 6; i++) {
        whitePegs += min(codeCount[i], guessCount[i]);
    }

    return {blackPegs, whitePegs};
}