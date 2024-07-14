int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Create a frequency map for the code and the guess
    map<char, int> code_freq, guess_freq;

    for (char c : code) {
        code_freq[c]++;
    }

    for (char c : guess) {
        guess_freq[c]++;
    }

    // Count the black pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code_freq[code[i]]--;
            guess_freq[guess[i]]--;
        }
    }

    // Count the white pegs
    for (int i = 0; i < 4; i++) {
        if (code_freq.find(guess[i]) != code_freq.end() && code_freq[guess[i]] > 0) {
            white++;
            code_freq[guess[i]]--;
        }
    }

    return {white, black};
}