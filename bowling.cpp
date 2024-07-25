int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int frame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (frame > 1 ? 10 : 0);
            frame++;
            currentRoll = 0;
        } else if (c == '/') {
            score += 10 - currentRoll;
            frame++;
            currentRoll = 0;
        } else {
            currentRoll = currentRoll * 10 + (c - '0') * 10;
            if (currentRoll >= 10) {
                score += 10;
                frame++;
                currentRoll = 0;
            }
        }
    }

    return score;
}