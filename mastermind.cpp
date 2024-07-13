int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Convert strings to arrays of characters for easier manipulation
    char codeArray[5], guessArray[5];
    strcpy(codeArray, code.c_str());
    strcpy(guessArray, guess.c_str());

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; i++) {
        if (codeArray[i] == guessArray[i]) {
            black++;
            codeArray[i] = 'x';
            guessArray[i] = 'x';
        }
    }

    // Count the number of correct colors in correct positions
    for (int i = 0; i < 4; i++) {
        if (codeArray[i] == guessArray[i]) {
            white++;
            codeArray[i] = 'x';
            guessArray[i] = 'x';
        }
    }

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; i++) {
        int count = 0;
        for (int j = 0; j < 4; j++) {
            if (codeArray[j] == guessArray[i]) {
                count++;
            }
        }
        white += count - 1;
    }

    return black, white;
}