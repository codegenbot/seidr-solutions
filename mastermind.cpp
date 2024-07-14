int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> code_map;
    map<char, int> guess_map;

    for (int i = 0; i < 4; ++i) {
        code_map[code[i]]++;
        guess_map[guess[i]]++;
    }

    for (auto it = code_map.begin(); it != code_map.end(); ++it) {
        if (it->second > 0 && guess_map[it->first] > 0) {
            white += min(it->second, guess_map[it->first]) - black;
        }
    }

    return {white, black};
}