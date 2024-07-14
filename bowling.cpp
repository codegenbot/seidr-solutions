int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'X') {
            score += 10 + max(0, (10 - roll)) * 10;
            roll = 10;
        } else if(s[i] == '/') {
            int nextRoll = s[i+1] - '0';
            int currentRoll = 10 - roll;
            if(currentRoll < 1) {
                score += 10 + max(0, (10 - roll)) * 10;
                roll = 10;
            } else {
                score += 10 + min(currentRoll, nextRoll);
                roll = 0;
            }
        } else {
            int currentRoll = s[i] - '0';
            if(roll < 2) {
                roll += currentRoll;
            } else {
                score += max(0, (10 - roll)) * 10 + min(currentRoll, 10);
                roll = currentRoll;
            }
        }
    }
    return score;
}