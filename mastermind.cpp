int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> codeCount, guessCount;
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }

    for (auto &p : codeCount) {
        if (p.second > 0 && p.first != code[0]) {
            white += min(p.second, guessCount[p.first]);
        }
    }

    return black + white;
}