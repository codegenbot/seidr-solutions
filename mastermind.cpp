int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    vector<char> code_chars(code.begin(), code.end());
    vector<char> guess_chars(guess.begin(), guess.end());

    for (int i = 0; i < 4; i++) {
        if (code_chars[i] == guess_chars[i]) {
            black++;
            code_chars[i] = '\0';
            guess_chars[i] = '\0';
        }
    }

    for (int i = 0; i < 4; i++) {
        char c = code_chars[0];
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (guess_chars[j] == c && guess_chars[j] != '\0') {
                found = true;
                break;
            }
        }
        if (!found) white++;
    }

    return black << 2 | white;
}