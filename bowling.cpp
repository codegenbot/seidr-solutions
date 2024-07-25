int bowlingScore(string s) {
    int score = 0;
    bool spare = false;
    int prevFrameScore = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + prevFrameScore;
            prevFrameScore = 0;
            spare = false;
        } else if (s[i] == '/') {
            score += 10 - (i % 2 == 1);
            prevFrameScore = 0;
            spare = true;
        } else {
            int currentRoll = s[i] - '0';
            score += currentRoll + prevFrameScore;
            prevFrameScore = 0;
            if (!spare) {
                if (s[i+1] == '/') {
                    i++;
                }
            }
        }
    }
    
    return score;
}