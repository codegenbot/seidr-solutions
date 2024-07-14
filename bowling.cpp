int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int previousRoll = 0;

    for (char c : s) {
        if (c == '/') {
            if (previousRoll + 1 > 9) {
                score += 10 - previousRoll;
                currentRolls++;
            } else {
                score += previousRoll;
            }
            currentRolls++;
            previousRoll = 0;
        } else if (isdigit(c)) {
            int roll = c - '0';
            if (previousRoll > 0) {
                if (currentRolls < 2) {
                    score += previousRoll + roll;
                } else {
                    score += max(previousRoll, roll);
                }
                currentRolls++;
            } else {
                previousRoll = roll;
                currentRolls++;
            }
        }
    }

    if (previousRoll > 0) {
        score += previousRoll;
    }

    return score;
}