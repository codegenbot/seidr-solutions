int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    int frame = 0;
    
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (frame > 1 ? 10 : 0);
            frame++;
            roll = 0;
        } else if (c == '/') {
            score += 10 - roll;
            frame++;
            roll = 0;
        } else {
            int points = c - '0';
            roll += points;
            if (roll >= 10) {
                score += 10 + (frame > 1 ? 10 : 0);
                frame++;
                roll = 0;
            }
        }
    }
    
    return score;
}