int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;
    
    for (int i = 0; i < 10; ++i) {
        if (s[i] == '/') {
            score += 10 - (i + 1);
            lastRoll = true;
        } else if (isdigit(s[i])) {
            int roll = s[i] - '0';
            if (lastRoll) return score;
            for (int j = i+1; j <= i+roll && j < 10; ++j) {
                if (s[j] == '/') {
                    score += 10 - (j + 1);
                    lastRoll = true;
                    break;
                } else if (isdigit(s[j])) {
                    roll += s[j] - '0';
                }
            }
            score += roll;
        }
    }
    
    return score;
}