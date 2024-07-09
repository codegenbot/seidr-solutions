int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRolls < 2) {
                score += 10 - (9 - currentRolls);
            }
            currentRolls = 0;
        } else if (c == 'X') {
            score += 30;
            currentRolls = 0;
        } else {
            int roll = c - '0';
            score += roll;
            currentRolls++;
        }
    }
    return score;
}