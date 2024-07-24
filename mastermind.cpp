int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    map<char, int> code_map;
    map<char, int> guess_map;
    
    for (char c : code) {
        code_map[c]++;
    }
    for (char c : guess) {
        guess_map[c]++;
    }
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            int code_count = code_map[guess[i]];
            int guess_count = guess_map[guess[i]];
            
            white += min(code_count, guess_count);
        }
    }
    
    return make_pair(4 - black, black).second;
}