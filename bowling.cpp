int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls(2);
    
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            roll = roll * 10 + (c - '0');
        } else if (c == '/') {
            score += rolls[0] + rolls[1];
            rolls.clear();
            roll = 0;
        } else if (c == 'X') {
            score += 10 + rolls[0];
            rolls.clear();
            roll = 0;
        }
        
        rolls.push_back(roll);
        roll = 0;
    }
    
    score += rolls[0] + rolls[1];
    
    return score;
}