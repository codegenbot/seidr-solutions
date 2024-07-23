int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    bool spare = false;
    
    for (char c : s) {
        if (c == '/') {
            if (currentRoll < 2) {
                score += 10 - currentRoll;
            }
            currentRoll = 0;
            spare = true;
        } else if (c == 'X') {
            score += 10;
            currentRoll = 0;
            spare = false;
        } else {
            currentRoll++;
        }
    }
    
    if (currentRoll > 1) {
        score += currentRoll * 2;
    } else if (currentRoll == 1 && !spare) {
        score += currentRoll;
    } else if (currentRoll == 1 && spare) {
        score += 10 - currentRoll + (currentRoll * 2);
    }
    
    return score;
}