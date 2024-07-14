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
        } else {
            currentRoll += c - '0';
            if (frame >= 9) {
                if (currentRoll + (s[s.length() - 1] - '0') >= 10) {
                    score += 10 + currentRoll;
                    return score;
                }
                score += currentRoll;
            } else if (currentRoll == 10) {
                score += currentRoll;
                frame++;
                currentRoll = 0;
            }
        }
    }

    return score;
}