int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            score += firstRoll + secondRoll;
            currentFrame++;
        } else if (s[i] == 'X') {
            score += 10;
            currentFrame++;
        } else {
            int roll = s[i] - '0';
            score += roll;
            if (currentFrame < 10) {
                if (i + 2 <= s.length() && s[i+1] != '/') {
                    i++; // skip the '/'
                }
                if (i + 2 <= s.length() && s[i+1] == 'X') {
                    score += 10;
                    currentFrame++;
                } else {
                    int nextRoll = s[i+1] - '0';
                    score += nextRoll;
                    currentFrame++;
                }
            }
        }
    }
    return score;
}