int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRolls++;
        } else if (c == '/') {
            score += 10 - (10 - currentRolls);
            currentRolls = 0;
        } else {
            int roll = c - '0';
            score += roll;
            currentRolls++;
            if (currentRolls == 2) {
                if (roll + (c+1 - '0') >= 10)
                    score += 10;
                else
                    score += roll + (c+1 - '0');
                currentRolls = 0;
            }
        }
    }
    return score;
}