int Mastermind(string code, string guess) {
    int black = 0;
    int white = 0;
    
    map<char, int> code_map;
    for (char c : code) {
        code_map[c]++;
    }
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code_map[code[i]]--;
        } else {
            int count = 0;
            for (char c : code) {
                if (c == guess[i] && code_map[c] > 0) {
                    count++;
                    code_map[c]--;
                }
            }
            white += count;
        }
    }
    
    return black + white - black;
}