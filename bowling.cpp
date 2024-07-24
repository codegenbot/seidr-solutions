int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (currentFrame < 10 ? 10 : 0);
            currentFrame++;
        } else if (s[i] == '/') {
            int thisFrameScore = 10 - (10 - (s[i-1] - '0')) - (10 - (s[i+1] - '0'));
            score += thisFrameScore;
            currentFrame++;
            i++; // Skip the '/' character
        } else {
            int thisRoll = s[i] - '0';
            if (currentFrame == 10) {
                if (thisRoll + (s[i+1] - '0') >= 10) {
                    score += 10;
                } else {
                    score += thisRoll + (s[i+1] - '0');
                }
                currentFrame++;
            } else {
                int thisFrameScore = thisRoll;
                if (i < s.length() - 1 && s[i+1] != '/') {
                    thisFrameScore += s[i+1] - '0';
                }
                score += thisFrameScore;
                currentFrame++;
            }
        }
    }
    return score;
}