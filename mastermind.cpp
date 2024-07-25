int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> code_count;
    map<char, int> guess_count;

    for (int i = 0; i < 4; ++i) {
        code_count[code[i]]++;
        guess_count[guess[i]]++;
    }

    for (int i = 0; i < 6; ++i) {
        if (code_count[char('A' + i)] > 0 && guess_count[char('A' + i)] > 0 && code_count[char('A' + i)] != guess_count[char('A' + i)]) {
            white += min(code_count[char('A' + i)], guess_count[char('A' + i)]);
        }
    }

    return to_string(white) + "\n" + to_string(black);
}