int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> code_count, guess_count;

    for (int i = 0; i < 4; i++) {
        code_count[code[i]]++;
        guess_count[guess[i]]++;
    }

    for (auto& p : code_count) {
        if (p.second > 0 && guess_count.find(p.first) != guess_count.end() && guess_count[p.first] > 0) {
            white += min(p.second, guess_count[p.first]);
        }
    }

    return black + (4 - black);
}