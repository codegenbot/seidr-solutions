int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;
    
    for (int frame = 1; frame <= 10; frame++) {
        if (s[2*frame-1] == 'X') {
            // strike in this frame, add 10 to the score and move on
            score += 10;
            lastRoll = true;
        } else if (s[2*frame-2] == '/') {
            // spare in this frame, add 10 to the score and move on
            int bonus = s[2*frame-1] - '0';
            score += 10 + bonus;
            lastRoll = false;
        } else {
            // roll 1 and/or roll 2 in this frame
            int roll1 = s[2*frame-2] - '0';
            int roll2 = s[2*frame-1] - '0';
            
            if (lastRoll) {
                // we are in a frame that follows a strike or spare
                score += 10 + min(roll1+roll2, 10);
            } else {
                // we are in the last roll of this frame
                score += roll1 + roll2;
            }
            
            lastRoll = true;
        }
    }
    
    return score;
}