int bowling(string s) {
    int score = 0;
    bool lastRoll = false;
    
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
            lastRoll = true;
        } else if (s[i] == '/') {
            int nextTwo = (s[i+1]-'0')*10 + (s[i+2]-'0');
            score += 10 + nextTwo;
            i += 2;
            lastRoll = false;
        } else {
            int roll = (s[i]-'0')*10 + (s[i+1]-'0');
            if (lastRoll) {
                score += roll;
            } else {
                score += min(roll, 10);
            }
        }
    }
    
    return score;
}