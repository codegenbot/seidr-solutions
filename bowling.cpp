int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int previousFrame = 0;
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] != '/') {
            currentRoll++;
        } else {
            if(currentRoll == 1 || (previousFrame == 10 && s[i-1] != '/')) {
                score += 10 + currentRoll - 1;
            } else {
                score += 10;
            }
            currentRoll = 0;
            previousFrame++;
        }
    }
    
    if(currentRoll > 1) {
        score += 10 + currentRoll - 1;
    } else {
        score += currentRoll;
    }
    
    return score;
}