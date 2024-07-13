int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRolls = 2;
        } else if (c == '/') {
            score += 10 - currentRolls;
            currentRolls = 0;
            currentFrame++;
        } else if (isdigit(c)) {
            int roll = c - '0';
            score += roll;
            currentRolls++;

            if (currentRolls == 2) {
                if (c == '1' || c == '3' || c == '6') {
                    score -= 10;
                }
                currentFrame++;
            }
        }
    }

    return score;
}