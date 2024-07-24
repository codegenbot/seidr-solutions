int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    map<char, int> codeCount;
    map<char, int> guessCount;

    // Count the characters in the code and guess
    for (char c : code) codeCount[c]++;
    for (char c : guess) guessCount[c]++;

    // Check for black pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            codeCount[code[i]]--;
            guessCount[guess[i]]--;
            black++;
        }
    }

    // Calculate the number of white pegs
    for (int i = 0; i < 6; i++) {
        int codeCountValue = codeCount[(char)(i + 'A')];
        int guessCountValue = guessCount[(char)(i + 'A')];
        if (codeCountValue > 0 && guessCountValue > 0) white += min(codeCountValue, guessCountValue);
    }

    return black * 100 + white;
}