int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRolls = 2;
        } else if (c == '/') {
            score += 10 - currentRolls;
            currentRolls = 0;
        } else {
            int roll = c - '0';
            if (currentRolls < 2) {
                score += roll;
                currentRolls++;
            } else {
                score += roll + currentRolls * 10;
                currentRolls = 0;
            }
        }
    }
    return score;
}