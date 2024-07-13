int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == '/') {
            int strikeOrSpare = 10 - (s[currentFrame*2-1] - '0');
            if (strikeOrSpare > 0) score += strikeOrSpare;
            currentFrame++;
        } else if (c >= 'X') {
            score += 10;
            currentFrame++;
        } else {
            int pins = c - '0' + (s[currentFrame*2-1] - '0');
            if (pins == 10) score += 10;
            else score += pins;
            currentFrame++;
        }
    }
    return score;
}