int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Initialize an array to store the frequency of each color in the code
    int color_frequency[6] = {0};

    // Count the frequency of each color in the code
    for (int i = 0; i < 4; i++) {
        color_frequency[code[i] - 'A']++;
    }

    // Count white pegs
    for (int i = 0; i < 4; i++) {
        int count = 0;
        for (int j = 0; j < 6; j++) {
            if (guess[i] == 'A' + j && color_frequency[j] > 0) {
                color_frequency[j]--;
                count++;
            }
        }
        white += count;
    }

    // Count black pegs
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            black++;
        }
    }

    return black - white;
}