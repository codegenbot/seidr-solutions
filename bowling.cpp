int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int frame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (frame < 10 ? 10 : 0);
            currentRoll++;
            frame++;
        } else if (c == '/') {
            score += 10 - currentRoll;
            currentRoll = 0;
            frame++;
        } else {
            int roll = c - '0';
            score += roll;
            currentRoll++;

            if (currentRoll >= 2) {
                frame++;
            }
        }
    }

    return score;
}