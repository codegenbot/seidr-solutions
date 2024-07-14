int bowlingScore(string s) {
    int score = 0;
    for(int i = 0; i < 10; i++) {
        if(s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int strike = 10 - (i + 1);
            score += 10 + strike;
        } else {
            int currentFrameScore = 0;
            for(int j = i; j < s.length(); j++) {
                if(s[j] != '/') {
                    currentFrameScore++;
                    if(currentFrameScore > 2) break;
                } else {
                    score += currentFrameScore;
                    currentFrameScore = 0;
                    break;
                }
            }
            score += currentFrameScore;
        }
    }
    return score;
}