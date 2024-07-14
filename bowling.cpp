int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'X') {
            score += 10 + (roll > 0 ? 10 : 0);
            roll = 0;
        } else if(s[i] == '/') {
            int currentRoll = 10 - (s[i+1] - '0');
            score += roll + currentRoll;
            i++;
            roll = 0;
        } else {
            int currentRoll = s[i] - '0';
            if(roll > 0) {
                currentRoll += roll;
                if(currentRoll > 10) {
                    score += 10;
                    roll -= (currentRoll - 10);
                } else {
                    score += currentRoll;
                    roll = 0;
                }
            } else {
                score += currentRoll;
                roll = currentRoll;
            }
        }
    }
    return score;
}