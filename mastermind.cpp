int solve(const string &code, const string &guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    vector<int> codeCount(6);
    for (char c : code) {
        codeCount[c - '0']++;
    }

    for (int i = 0; i < 4; ++i) {
        if (guess[i] == code[i]) {
            blackPegs++;
            codeCount[guess[i] - '0']--;
        }
    }

    for (int i = 0; i < 4; ++i) {
        int c = guess[i];
        if (c != code[i] && codeCount[c - '0']) {
            whitePegs++;
            codeCount[c - '0']--;
        }
    }

    return make_pair(blackPegs, whitePegs).second;
}