PegCounts mastermind(std::string code, std::string guess) {
    PegCounts result = {0, 0};
    std::string remainingGuess = guess;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            result.black++;
            remainingGuess[i] = ' ';
        }
    }

    int codeCount[256] = {0};
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
    }
    
    for (int i = 0; i < 4; ++i) {
        if (remainingGuess[i] != ' ') {
            if (codeCount[guess[i]] > 0) {
                result.white++;
                codeCount[guess[i]]--;
            } else if (codeCount[code[i]] > 0) {
                result.black++;
                remainingGuess[i] = ' ';
                codeCount[code[i]]--;
            }
        }
    }

    return result;
}