int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int frameScore = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (currentRolls > 0 ? 10 : 0);
            currentRolls = 0;
            frameScore = 10;
        } else if (c == '/') {
            score += frameScore;
            frameScore = 0;
            currentRolls = 0;
        } else if (isdigit(c)) {
            int roll = c - '0';
            if (frameScore < 10) {
                frameScore += roll;
                currentRolls++;
            } else {
                score += roll;
                currentRolls = 1;
            }
        }
    }

    return score;
}