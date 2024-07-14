int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') { // strike
            score += 10 + 10 + 10;
            currentFrame++;
        } else if (s[i] == '/') { // spare
            score += 10;
            currentFrame++;
        } else {
            int pins = s[i] - '0';
            if (currentFrame < 9) {
                if (i + 2 <= s.length() && s[i+1] == 'X' || s[i+2] == '/') { // next ball is a strike or spare
                    score += 10;
                    currentFrame++;
                } else {
                    pins += s[i+1] - '0';
                    if (pins > 10) {
                        pins = 10;
                    }
                    score += pins;
                }
            } else { // last frame
                score += pins;
            }
        }
    }
    return score;
}