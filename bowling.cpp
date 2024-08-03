int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool newRoll = true;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'X') {
            score += 10 + (roll * (newRoll ? 2 : 1));
            roll = 0;
            newRoll = true;
        } else if(s[i] == '/') {
            int next = stoi(s.substr(i+1, 1));
            int prev = roll - '0';
            score += prev + prev > 10 ? 10 : prev;
            roll = 0;
            newRoll = false;
            i++;
        } else {
            roll = roll * 10 + (s[i] - '0');
            if(roll >= 10) {
                score += 10 + (newRoll ? 1 : 2);
                roll = 0;
                newRoll = true;
            }
        }
    }
    
    if(roll > 0) {
        score += roll;
    } else {
        int last = roll - '0';
        score += last < 10 ? last : 10;
    }
    
    return score;
}