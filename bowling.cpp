int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (currentRolls > 0 ? 10 : 0);
            currentRolls = 0;
            currentFrame++;
        } else if (c == '/') {
            int roll1 = c - '0';
            int roll2 = s[s.find('/') + 1] - '0';
            score += roll1 + roll2;
            currentRolls = 0;
            currentFrame++;
        } else {
            int roll = c - '0';
            score += roll;
            currentRolls++;
            if (currentRolls == 2) {
                currentFrame++;
            }
        }
    }

    return score;
}