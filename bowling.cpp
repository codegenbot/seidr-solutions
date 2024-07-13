int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    bool spare = false;
    
    for (char c : s) {
        if (c == '/') {
            spare = true;
        } else if (c == 'X') {
            score += 10 + (spare ? 10 : currentRoll);
            currentRoll = 0;
            spare = false;
        } else {
            currentRoll++;
        }
    }
    
    return score;
}