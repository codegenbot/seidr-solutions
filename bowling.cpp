int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int currentFrame = 1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (currentFrame > 1 ? 10 : 0);
            currentFrame++;
            currentRoll = 0;
        } else if (s[i] == '/') {
            int nextRoll = s[i+1] - '0';
            score += 10 - currentRoll;
            i++; // skip the '/'
            currentRoll = 0;
            currentFrame++;
        } else {
            currentRoll += s[i] - '0';
            if (currentRoll == 10) {
                score += 10;
                currentFrame++;
                currentRoll = 0;
            }
        }
    }

    return score;
}