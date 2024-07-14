int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, prevRolls = 0;
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '/') {
            if(i > 0) {
                if(s[i-1] != '/') {
                    if(roll1 < 10) score += (10 - roll1);
                }
                prevRolls = 0;
            }
            continue;
        }
        
        int roll = s[i] - 'X';
        if(roll > 0) {
            if(prevRolls == 1) score += roll + roll1;
            else score += roll;
            roll1 = roll;
            prevRolls++;
        } else {
            roll1 = (int)s[i];
            prevRolls++;
        }
        
    }
    
    return score;
}