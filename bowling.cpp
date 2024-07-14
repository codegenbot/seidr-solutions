int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int frame = 1;
    
    for (char c : s) {
        if (c == 'X') { // strike
            score += 10 + 10 + 10;
            currentRoll = 3;
        } else if (c == '/') { // spare
            score += 10 + 10 - 2;
            currentRoll = 2;
        } else {
            int roll = c - '0';
            score += roll;
            currentRoll--;
        }
        
        if (currentRoll == 0) {
            frame++;
            currentRoll = 1;
        }
    }
    
    return score;
}