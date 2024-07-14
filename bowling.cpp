int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int rolls = 0;
    
    for (char c : s) {
        if (c == '/') {
            score += min(10 - '0', 10);
            frame++;
            rolls = 0;
        } else {
            rolls++;
            if (rolls == 2) {
                if (c == 'X') {
                    score += 10;
                    frame++;
                    rolls = 0;
                } else {
                    int currentRoll = c - '0';
                    score += currentRoll + min(10 - '0', 10);
                    frame++;
                    rolls = 0;
                }
            }
        }
    }
    
    return score;
}