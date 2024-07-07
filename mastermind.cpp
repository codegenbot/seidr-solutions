int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    map<char, int> codeMap;
    vector<bool> codeUsed(6, false);

    for (int i = 0; i < 4; i++) {
        codeMap[code[i]]++;
        codeUsed[code[i]] = true;
    }

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else if (codeMap[guess[i]] > 0 && !codeUsed[guess[i]]) {
            whitePegs++;
            codeMap[guess[i]]--;
            codeUsed[guess[i]] = true;
        }
    }

    return {blackPegs, whitePegs};
}