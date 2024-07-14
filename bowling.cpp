int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, frameScore;
    
    for(int i=0; i<10; i++) {
        if(s[i] == '/') { // Strike
            score += 10 + (i < 9 ? 10 : 0);
        } else if(i < 8 && s[i+1] == '/') { // Spare
            roll1 = (s[i] - '0');
            roll2 = (s[i+2] - '0');
            frameScore = roll1 + roll2;
            score += frameScore;
            i++;
        } else {
            roll1 = (s[i*2-1] - '0');
            if(s[i*2] == '/') { // Strike
                score += 10;
            } else {
                roll2 = (s[i*2] - '0');
                frameScore = roll1 + roll2;
                score += frameScore;
            }
        }
    }
    
    return score;
}