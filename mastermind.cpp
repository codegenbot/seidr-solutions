int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count the number of correct colors but wrong positions (white pegs)
    map<char, int> code_count;
    map<char, int> guess_count;
    for (char c : code) code_count[c]++;
    for (char c : guess) guess_count[c]++;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) black++;
        else if (guess_count[code[i]] > 0) white++;
    }
    
    // Subtract the number of correct positions from total correct colors to get black pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) black--;
    }
    
    return make_pair(white, black).second;
}