int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int rollCount = 0;

    for (char c : s) {
        if (c == 'X') { // strike
            score += 10 + 10 + 10;
            currentFrame++;
        } else if (c == '/') { // spare
            score += 10 + 10 - 2;
            currentFrame++;
        } else { // normal roll
            int pins = c - '0';
            if (currentFrame < 10) {
                score += pins;
                rollCount++;
                if (rollCount < 2 || s[s.size() - 1] != '/') {
                    continue;
                }
                currentFrame++;
            } else { // last frame
                score += pins;
                rollCount++;
                if (s.size() > 2 && s[s.size() - 1] == 'X') {
                    score += 10 + 10;
                } else if (s.size() > 2 && s[s.size() - 1] == '/') {
                    score += 10 + 10 - 2;
                }
            }
        }
    }

    return score;
}