int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int frame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + 10;
            currentRoll = 2;
        } else if (c == '/') {
            score += 10 - currentRoll;
            currentRoll = 0;
            frame++;
        } else if (isdigit(c)) {
            int roll = c - '0';
            currentRoll += roll;
            if (currentRoll >= 10) {
                score += 10;
                currentRoll = 0;
                frame++;
            }
        }
    }

    return score;
}