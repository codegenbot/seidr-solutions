int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;
    int currentRoll = 0;
    
    for (char c : s) {
        if (c != '/') {
            currentRoll++;
            if (isdigit(c)) {
                score += c - '0';
            } else if (c == 'X') {
                score += 10;
                currentRoll = 0;
            }
        } else {
            if (currentRoll > 1) {
                score += currentRoll;
            }
            currentRoll = 0;
        }
        
        rolls++;
        if (rolls >= 20) break;
    }
    
    return score;
}