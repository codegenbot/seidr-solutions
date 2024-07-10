int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int frameScore = 0;

    for (char c : s) {
        if (c == '/') {
            score += min(10 - '0', 10);
            currentRolls = 0;
            frameScore = 0;
        } else if (c == 'X') {
            score += 10;
            currentRolls = 0;
            frameScore = 0;
        } else {
            int roll = c - '0';
            if (currentRolls < 2) {
                frameScore += roll;
                currentRolls++;
            } else {
                score += frameScore + roll;
                frameScore = 0;
                currentRolls = 1;
            }
        }
    }

    return score;
}