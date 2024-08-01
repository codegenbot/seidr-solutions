int bowlingScore(string s) {
    int score = 0;
    bool firstRollInFrame = true;

    for(int i=0; i<s.size(); i++) {
        if(s[i] == '/') {
            int roll1 = s[i-1]- 'X';
            int roll2 = s[i+1]- 'X';
            if(firstRollInFrame) {
                score += roll1 + roll2;
            } else {
                if(roll1 + roll2 >= 10)
                    score += 10 + score / 10;
                else
                    score += roll1 + roll2 + score / 10;
            }
            firstRollInFrame = false;
        }
    }
    return score;
}