int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + 10;
            currentRolls = 2;
        } else if (c == '/') {
            score += 10 - currentRolls;
            currentRolls = 0;
            currentFrame++;
        } else if (isdigit(c)) {
            int rolls = c - '0';
            score += rolls;
            currentRolls++;
            if (currentRolls == 2) {
                currentFrame++;
            }
        }
    }

    return score;
}