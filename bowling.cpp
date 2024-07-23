int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (currentRolls > 0 ? 10 : 0);
            currentRolls = 0;
            currentFrame++;
        } else if (s[i] == '/') {
            int roll1 = s[i - 1] - '0';
            int roll2 = s[i + 1] - '0';
            score += roll1 + roll2;
            currentRolls = 0;
            currentFrame++;
        } else {
            int roll = s[i] - '0';
            currentRolls++;

            if (currentRolls == 2) {
                score += roll;
                currentRolls = 0;
                currentFrame++;
            }
        }
    }

    return score;
}