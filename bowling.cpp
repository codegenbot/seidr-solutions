int bowlingScore(string input) {
    int score = 0;
    bool lastRollInFrame = false;
    int frame = 0;

    for (char c : input) {
        if (c == 'X') {
            score += 10 + (lastRollInFrame ? 10 : 0);
            lastRollInFrame = true;
        } else if (c == '/') {
            int firstRoll = (input[frame*2] - '0') * 10 + (input[frame*2+1] - '0');
            score += firstRoll;
            lastRollInFrame = true;
        } else {
            int roll = (c - '0') * 10 + (input[2*frame+1] - '0');
            if (lastRollInFrame) {
                score += roll;
            } else {
                score += min(roll, 10);
                frame++;
            }
        }
    }

    return score;
}