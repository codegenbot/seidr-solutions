int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls(21);
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (roll >= 2) {
                int bonus = min(rolls[roll - 1], rolls[roll]) + rolls[roll];
                score += bonus;
                roll = 0;
            } else {
                roll++;
            }
        } else {
            rolls[roll++] = s[i] - 'X';
        }
    }
    
    for (int i = 0; i < 10; i++) {
        if (rolls[i] == 10) {
            score += 10 + rolls[i + 1] + rolls[i + 2];
            i += 2;
        } else {
            int bonus = min(rolls[i], rolls[i + 1]) + rolls[i];
            score += bonus;
        }
    }
    
    return score;
}