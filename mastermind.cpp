int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else if (guessCount[guess[i]] > 0) {
            codeCount[code[i]]--;
            guessCount[guess[i]]--;
            white++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            int count = 0;
            for (char c : code) {
                if (c == guess[i] && codeCount[c] > 0) {
                    codeCount[c]--;
                    count++;
                }
            }
            white += count;
        }
    }

    return black + white;
}