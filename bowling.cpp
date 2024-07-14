int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int nextTwo = 10 - (s[i + 1] - '0');
            score += nextTwo;
            i++;
        } else {
            int currentFrameScore = s[i] - '0';
            if (i < 8 && s[i + 1] != '/') {
                currentFrameScore *= 2;
            }
            score += currentFrameScore;
        }
    }
    return score;
}