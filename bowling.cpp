int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrameScore = 0;
    
    for (char c : s) {
        if (c == '/') {
            if (currentRolls == 1) {
                currentFrameScore += 10 - (10 - currentFrameScore);
            } else {
                score += currentFrameScore + 10;
                currentFrameScore = 0;
            }
            currentRolls = 0;
        } else if (c == 'X') {
            score += 10 + 10;
            currentFrameScore = 20;
            currentRolls = 2;
        } else {
            int rollValue = c - '0';
            currentFrameScore += rollValue;
            currentRolls++;
        }
    }
    
    if (currentRolls == 1) {
        score += currentFrameScore + 10;
    } else {
        score += currentFrameScore + 10 + currentFrameScore;
    }
    
    return score;
}