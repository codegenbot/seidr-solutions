int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] >= '1' && s[i] <= '9') {
            int currentFrameScore = 0;
            char lastRoll = s[i];
            for (int j = i; j < i+2; j++) {
                if (j == i) {
                    currentFrameScore += s[j] - '0';
                } else {
                    if (s[j] == '/') {
                        currentFrameScore += 10;
                    } else {
                        currentFrameScore += s[j] - '0' + currentFrameScore;
                    }
                }
            }
            score += currentFrameScore;
        } else {
            int currentFrameScore = 0;
            char lastRoll1 = s[i];
            for (int j = i; j < i+2; j++) {
                if (j == i) {
                    currentFrameScore += s[j] - '0';
                } else {
                    if (s[j] == '/') {
                        currentFrameScore += 10;
                    } else {
                        currentFrameScore += s[j] - '0' + currentFrameScore;
                    }
                }
            }
            score += currentFrameScore;
        }
    }
    return score;
}