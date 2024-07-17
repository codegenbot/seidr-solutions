int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrameScore = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (currentRolls == 2) {
                score += currentFrameScore;
                currentFrameScore = 0;
                currentRolls = 0;
            }
        } else if (isdigit(s[i])) {
            int roll = s[i] - '0';
            currentFrameScore += roll;
            currentRolls++;
            if (currentRolls == 2) {
                score += currentFrameScore;
                currentFrameScore = 0;
                currentRolls = 0;
            }
        } else if (s[i] == 'X') {
            score += 10 + 10;
            currentFrameScore = 20;
            currentRolls = 0;
        }
    }

    // Add the last frame
    if (currentFrameScore > 0) {
        score += currentFrameScore;
    } else if (currentRolls == 2) {
        score += 10 + 10;
    } else if (s[i] == 'X') {
        score += 10 + 10;
    }

    return score;
}