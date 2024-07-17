int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRolls = 2;
        } else if (c == '/') {
            score += 10 - (currentRolls - 1);
            currentRolls = 0;
            currentFrame++;
        } else if (isdigit(c)) {
            int points = c - '0';
            if (currentRolls < 2) {
                score += points;
                currentRolls++;
            } else {
                if (points == 10) {
                    score += 10 + 10;
                } else {
                    score += 10 + points;
                }
                currentFrame++;
                currentRolls = 0;
            }
        }
    }

    return score;
}