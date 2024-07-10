int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == 'X') { // strike
            score += 10 + nextTwoRolls(s, currentFrame);
            currentFrame++;
        } else if (c == '/') { // spare
            score += 10 + rollAfterSpare(s, currentFrame);
            currentFrame++;
        } else {
            int rolls = c - '0';
            score += rolls;
            currentFrame++;
            if (currentFrame < 11) {
                char nextC = s[s.length() - currentFrame * 2 - 1];
                if (nextC == 'X') { // next frame is a strike
                    score += 10 + rollAfterStrike(s, currentFrame);
                    currentFrame++;
                } else if (nextC == '/') { // next frame is a spare
                    score += 10 + rollAfterSpare(s, currentFrame);
                    currentFrame++;
                }
            }
        }
    }
    return score;
}

int nextTwoRolls(string s, int currentFrame) {
    return (s[s.length() - currentFrame * 2] - '0') * 10 + (s[s.length() - currentFrame * 2 - 1] - '0');
}

int rollAfterSpare(string s, int currentFrame) {
    return (s[s.length() - currentFrame * 2] - '0');
}

int rollAfterStrike(string s, int currentFrame) {
    return (s[s.length() - currentFrame * 2] - '0') * 10 + (s[s.length() - currentFrame * 2 - 1] - '0');
}