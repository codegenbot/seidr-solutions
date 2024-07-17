int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRolls = 2;
        } else if (c == '/') {
            score += 10 - (currentRolls > 0 ? currentRolls : 1);
            currentRolls = 0;
        } else if (isdigit(c)) {
            int roll = c - '0';
            if (currentRolls < 2) {
                score += roll;
                currentRolls++;
            } else {
                if (roll == 10) {
                    score += 10;
                } else {
                    score += roll;
                }
                currentRolls = 0;
            }
        }
    }
    return score;
}