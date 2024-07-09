int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == 'X') {
            score += 10 + (roll > 0 ? 10 : 0);
            roll = 0;
        } else if(s[i] == '/') {
            int prevRoll = roll;
            roll = 0;
            for(int j=i+1; j<s.size() && s[j] != '/'; j++) {
                roll += (s[j] - '0');
            }
            score += prevRoll + roll;
        } else {
            roll += (s[i] - '0');
        }
    }
    return score;
}