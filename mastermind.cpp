int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Initialize arrays to store the count of each character in the code and guess.
    int codeCount[6] = {0}, guessCount[6] = {0};

    // Count the occurrences of each character in the code and guess.
    for (char c : code) {
        codeCount[c - 'A']++;
    }
    for (char c : guess) {
        guessCount[c - 'A']++;
    }

    // Calculate the number of black pegs by comparing the characters at corresponding positions.
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            codeCount[code[i] - 'A']--;
            guessCount[guess[i] - 'A']--;
            black++;
        }
    }

    // Calculate the number of white pegs by counting the remaining occurrences of each character in the guess.
    for (int i = 0; i < 6; i++) {
        white += min(codeCount[i], guessCount[i]);
    }

    return {white, black};
}