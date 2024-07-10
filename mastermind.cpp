PegCounts mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    string usedCode(code);
    string usedGuess(guess);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            usedCode[i] = ' '; // Mark as used to avoid counting again
            usedGuess[i] = ' ';
        }
    }

    for (char c : usedGuess) {
        bool found = false;
        for (int i = 0; i < 4; ++i) {
            if (code[i] == c && !usedCode[i]) {
                white++;
                usedCode[i] = ' '; // Mark as used to avoid counting again
                found = true;
                break;
            }
        }
        if (!found) {
            for (int i = 0; i < 4; ++i) {
                if (code[i] == c) {
                    black++;
                    usedCode[i] = ' '; // Mark as used to avoid counting again
                    found = true;
                    break;
                }
            }
        }
    }

    return {black, white};
}