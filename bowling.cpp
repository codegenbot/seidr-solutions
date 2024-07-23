int bowlingScore(string s) {
    int score = 0;
    int currentRoll1 = 0;
    int currentRoll2 = 0;
    
    for (char c : s) {
        if (c == '/') {
            if (currentRoll1 + currentRoll2 < 10) {
                score += 10 - (currentRoll1 + currentRoll2);
            }
            currentRoll1 = 0;
            currentRoll2 = 0;
        } else if (c == 'X') {
            score += 10;
            currentRoll1 = 0;
            currentRoll2 = 0;
        } else {
            currentRoll1++;
            if (c == '/') {
                if (currentRoll1 < 10) {
                    score += 10 - currentRoll1;
                }
            }
            else if (c != 'X') {
                currentRoll2++;
                if (currentRoll2 > 0) {
                    score += currentRoll1 + currentRoll2;
                }
                else
                    score += currentRoll1;
            }
        }
    }
    
    return score;
}