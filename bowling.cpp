int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;
    
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // Strike
            score += 10 + (i < 8 ? 10 : 0);
            lastRoll = true;
        } else if (s[i] == '/') { // Spare
            score += 10;
            lastRoll = true;
        } else {
            int roll1 = s[i] - '0';
            int roll2 = s[i + 1] - '0';
            if (lastRoll) {
                return -1; // Invalid input
            }
            score += roll1 + roll2;
            lastRoll = false;
            if (roll1 == 10) { // Next two rolls are not part of this frame
                i++;
            }
        }
    }
    
    return score;
}