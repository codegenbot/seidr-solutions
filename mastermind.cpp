int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;
    int code_counts[6] = {0};
    
    // Count occurrences of each character in the code
    for (char c : code) {
        code_counts[c - 'A']++;
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++; // Black peg: correct color and position
        } else {
            int count = code_counts[guess[i] - 'A'];
            white += (count > 0) ? 1 : 0;
            if (count > 0) {
                code_counts[guess[i] - 'A']--;
            }
        }
    }
    
    // Count remaining occurrences of correct colors in wrong positions
    for (int i = 0; i < 6; ++i) {
        white += std::min(code_counts[i], 4 - black);
    }
    
    return black + white;
}