int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'X') {
            score += 10 + (roll > 0 ? min(10, 10 - roll) : 10);
            roll = 0;
        } else if(s[i] == '/') {
            int thisRoll = 10 - s[i+1] - s[i+2];
            score += thisRoll + roll;
            i++;
            roll = 0;
        } else {
            roll += (s[i] - '0');
        }
    }
    return score;
}