int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    vector<int> code_count(6, 0);
    vector<int> guess_count(6, 0);

    for (char c : code) {
        code_count[c - 'A']++;
    }

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code_count[guess[i] - 'A']--;
            guess_count[guess[i] - 'A']--;
        } else {
            int j;
            for (j = 0; j < 6; j++) {
                if (code_count[j] > 0 && guess[j] == guess[i]) {
                    break;
                }
            }
            code_count[j]--;
            guess_count[guess[i] - 'A']--;
        }
    }

    white = 4 - black;

    return make_pair(white, black).second;
}