int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, frameScore;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10;
            if (i < s.length() - 2) {
                if (s[i+1] == '/' && s[i+2] == 'X') {
                    score += 10;
                    i++;
                } else {
                    score += 10;
                }
            }
        } else if (s[i] == '/') {
            roll1 = s[i-1] - '0';
            roll2 = s[i+1] - '0';
            frameScore = roll1 + roll2;
            score += frameScore;
        } else {
            int roll = s[i] - '0';
            score += roll;
        }
    }
    
    return score;
}