int bowlingScore(const string& input) {
    int score = 0;
    int roll = 0;
    vector<int> rolls(10);
    
    for (char c : input) {
        if (c == 'X') {
            rolls[roll] = 10;
            score += 10 + (rolls[roll - 1] > 0 ? rolls[roll - 1] : 10);
            roll++;
        } else if (c == '/') {
            int previousRoll = rolls[roll - 1];
            rolls[roll] = 10 - previousRoll;
            score += previousRoll + rolls[roll];
            roll++;
        } else {
            rolls[roll] = c - '0';
            score += rolls[roll];
            roll++;
        }
    }
    
    return score;
}