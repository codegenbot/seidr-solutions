int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls(21);
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + rolls[roll+1] + rolls[roll+2];
            roll += 3;
        } else if (s[i] == '/') {
            int strike = 10 - (rolls[roll-1] + rolls[roll-2]);
            score += 10 + strike;
            roll += 2;
        } else {
            int pin = s[i] - '0';
            rolls[roll++] = pin;
            if (roll >= 2) {
                if (rolls[roll-1] + rolls[roll-2] == 10) {
                    score += 10 + rolls[roll];
                    roll++;
                } else {
                    score += rolls[roll-1] + rolls[roll-2] + pin;
                }
            }
        }
    }
    
    return score;
}