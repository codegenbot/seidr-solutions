int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    int lastRoll = -1; // To keep track of previous rolls in case of strike or spare
    
    for (char c : s) {
        if (c == '/') { // If we hit a divide, it means the frame is over
            score += min(10, roll); 
            roll = 0;
        } else if (isdigit(c)) {
            roll = roll * 10 + c - '0'; // Add the number of pins knocked down this roll
            if (roll >= 10) { // If we hit at least 10 with this roll
                score += 10; 
                roll = 0;
            } else if (lastRoll == 1) {
                score += roll + 10; // If the previous frame was a strike, add the number of pins knocked down to this frame's score
                roll = 0;
            }
        } else { // We hit an 'X' which means we got a strike in the last two rolls
            score += 10 + min(10, (lastRoll == -1) ? 9 : 10); 
            roll = 0;  
        }
        lastRoll = roll;
    }
    
    if (roll > 0) { // In case we got a strike or spare in the last frame
        score += min(10, roll); 
    } else {
        score += min(10, roll);
    }
    
    return score;
}