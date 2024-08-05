int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    map<char, int> codeMap;
    for (char c : code) {
        codeMap[c]++;
    }

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            codeMap[code[i]]--;
            blackPegs++;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (code[i] == guess[j] && codeMap[code[i]] > 0) {
                codeMap[code[i]]--;
                whitePegs++;
                break;
            }
        }
    }

    return make_pair(blackPegs, whitePegs).second;
}