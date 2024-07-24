int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    map<char, int> codeCount;
    map<char, int> guessCount;

    // Counting the frequency of each character in the code and the guess
    for (char c : code) {
        codeCount[c]++;
    }
    for (char c : guess) {
        guessCount[c]++;
    }

    // Calculate white pegs
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            black++;
        } else if (codeCount[guess[i]] > 0) {
            white++;
            codeCount[guess[i]]--;
        }
    }

    // Calculate black pegs
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            continue;
        } else if (code.find(guess[i]) != string::npos) {
            black++;
        }
    }

    return make_pair(white, black).second;
}