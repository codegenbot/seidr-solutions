int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls(21);
    
    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] == 'X') {
            score += 10 + rolls(i+2);
            roll = 3;
        } else if (s[i] == '/') {
            int spare = 10 - (rolls(i+1) ? rolls(i+1) : 0);
            score += 10;
            roll = 2;
        } else {
            int pins = s[i] - '0';
            score += pins;
            --roll;
        }
        
        if (!roll) break;
    }
    
    return score;
}