int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' ';
            guess[i] = ' ';
        }
    }

    // Count the number of correct colors in right positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            white--;
        }
    }

    // Count the remaining correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[i] == guess[j]) {
                count++;
            }
        }
        white += count - black;
    }

    return white, black;
}