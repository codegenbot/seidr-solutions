int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int totalFrames = 0;

    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'X') {
            score += 10 + (currentRoll*10);
            currentRoll = 0;
            totalFrames++;
        } else if(s[i] == '/') {
            int thisFrame = s[i-1]-'0';
            thisFrame *= 10 - thisFrame;
            score += thisFrame + (currentRoll*5);
            currentRoll = 0;
            totalFrames++;
        } else {
            if(currentRoll < 2) {
                currentRoll++;
                thisFrame = s[i]-'0';
                if(s[i+1] == 'X' || s[i+1] == '/') thisFrame *= 10-thisFrame;
            }
        }
    }

    return score;
}