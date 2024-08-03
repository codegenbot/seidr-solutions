int bowling(string s) {
    int score = 0;
    int currentRoll = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '/') {
            if(currentRoll < 10) {
                score += min(10 - currentRoll, (s[i-1] - '0'));
            } else {
                score += min(10 - currentRoll, 10);
            }
            currentRoll = 0;
        } else {
            currentRoll += s[i] - '0';
        }
    }
    return score;
}