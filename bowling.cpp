int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int rollCount = 0;

    for (char c : s) {
        if (c == '/') {
            if (currentFrame < 10) {
                score += getPointsForRoll(rollCount);
                rollCount = 0;
            }
            currentFrame++;
        } else if (c != 'X') {
            int points = c - '0';
            score += points;
            rollCount++;
        } else {
            score += 10;
            rollCount++;
        }
    }

    if (rollCount == 2) {
        score += getPointsForRoll(1);
    } else if (rollCount == 3) {
        score += getPointsForRoll(0) + getPointsForRoll(1) + getPointsForRoll(2);
    }

    return score;
}

int getPointsForRoll(int rollNumber) {
    if (rollNumber < 10) {
        return 10;
    } else {
        return 0;
    }
}