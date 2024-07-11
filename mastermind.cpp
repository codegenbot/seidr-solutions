int solve(string &code, string &guess) {
    int white = 0;
    int black = 0;

    vector<int> color_count(6, 0);
    for (char c : code) {
        color_count[c - 'A']++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            color_count[guess[i] - 'A']--;
        } else {
            int count = 0;
            char c = guess[i];
            for (int j = 0; j < 4; ++j) {
                if (code[j] == c && c != code[i]) {
                    count++;
                    color_count[c - 'A']--;
                }
            }
            white += count;
        }
    }

    return make_pair(white, black).second;
}