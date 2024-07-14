int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int rollsLeftInFrame = 2;

    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRoll++;
            rollsLeftInFrame--;
        } else if (c == '/') {
            score += (10 - currentRoll);
            currentRoll = 0;
            rollsLeftInFrame--;
        } else if (isdigit(c)) {
            int strikeOrSpare = c - '0';
            currentRoll += strikeOrSpare;
            if (rollsLeftInFrame > 1) {
                rollsLeftInFrame--;
            }
        }
    }

    return score;
}