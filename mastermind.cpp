int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    vector<int> code_count(6, 0);
    vector<int> guess_count(6, 0);

    for (char c : code) {
        if (c == 'B') code_count[5]++;
        else code_count[c - 'A']++;
    }

    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            black++;
            code_count[guess[i] - 'A']--;
            guess_count[guess[i] - 'A']--;
        } else {
            for (char c : "ABCDEFGHIJKLMNOPQRSTUVWXYZ") {
                if (code_count[c - 'A'] && guess_count[c - 'A']) {
                    white++;
                    code_count[c - 'A']--;
                    guess_count[c - 'A']--;
                    break;
                }
            }
        }
    }

    return make_tuple(white, black);
}