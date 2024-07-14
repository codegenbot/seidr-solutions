int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int frame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + currentRoll;
            currentRoll = 0;
            frame++;
        } else if (c == '/') {
            score += 10 - currentRoll;
            currentRoll = 0;
            frame++;
        } else {
            currentRoll += c - '0';
            if (frame == 10) {
                if (currentRoll + (c - '0') >= 10) {
                    score += 10;
                } else {
                    score += currentRoll + (c - '0');
                }
            }
        }
    }

    return score;
}