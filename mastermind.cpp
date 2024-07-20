int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of each color in the code and guess
    map<char, int> codeColorCount, guessColorCount;
    for (char c : code) {
        codeColorCount[c]++;
    }
    for (char c : guess) {
        guessColorCount[c]++;
    }

    // Calculate the number of white pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeColorCount[code[i]]--;
            guessColorCount[guess[i]]--;
            white += min(codeColorCount[code[i]], guessColorCount[guess[i]]);
        }
    }

    // Calculate the number of black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            continue;
        } else {
            codeColorCount[code[i]]--;
            white += min(codeColorCount[code[i]], 1);
        }
    }

    return make_pair(white, black).second;
}