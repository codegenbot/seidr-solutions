int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 1;
    int rollsInFrame = 0;

    for (char c : s) {
        if (c == '/') {
            if (rollsInFrame == 2) {
                currentFrame++;
                rollsInFrame = 0;
            }
        } else if (c == 'X') {
            score += 10 + 10;
            currentFrame++;
            rollsInFrame = 0;
        } else if (isdigit(c)) {
            int points = c - '0';
            if (rollsInFrame == 1) {
                if (points == 10) {
                    score += 10;
                    currentFrame++;
                    rollsInFrame = 0;
                } else {
                    score += points;
                    if (c + 1 < s.length() && s[c+1] == '/') {
                        score += s[c+2] - '0';
                        currentFrame++;
                        rollsInFrame = 0;
                    }
                }
            } else {
                score += points;
                rollsInFrame++;
            }
        }
    }

    return score;
}