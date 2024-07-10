int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int frame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (currentRoll > 0 ? currentRoll : 10);
            currentRoll = 0;
            frame++;
        } else if (c == '/') {
            score += 10 - currentRoll;
            currentRoll = 0;
            frame++;
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
            if (frame < 10) {
                if (currentRoll >= 10) {
                    score += 10 + (currentRoll > 10 ? 10 : currentRoll);
                    currentRoll = 0;
                    frame++;
                }
            } else {
                score += currentRoll;
            }
        }
    }

    return score;
}