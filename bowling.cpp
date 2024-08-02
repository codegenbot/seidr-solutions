int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            int firstRoll = (s[i-1] - '0') + (s[i-2] - '0');
            int secondRoll = (s[i+1] - '0') + (s[i+2] - '0');
            if (currentFrame < 10) {
                if (firstRoll + secondRoll == 10) {
                    score += 10;
                    currentFrame++;
                } else {
                    score += firstRoll;
                    currentFrame++;
                }
            } else {
                score += firstRoll;
            }
        } else if (s[i] >= 'X' && s[i] <= '9') {
            int roll = (s[i] - '0');
            if (currentFrame < 10) {
                if (roll == 10) {
                    score += roll + 10;
                    currentFrame++;
                } else {
                    score += roll;
                    currentFrame++;
                }
            } else {
                score += roll;
            }
        } else {
            int roll = (s[i] - '0');
            if (currentFrame < 10) {
                score += roll;
                currentFrame++;
            } else {
                score += roll;
            }
        }
    }
    return score;
}