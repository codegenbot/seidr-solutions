int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;

    for (int frame = 1; frame <= 10; ++frame) {
        if (s[2*frame-1] == '/') {
            int rollsInFrame = 2;
            if (s[2*frame-2] != 'X') {
                rollsInFrame = 3;
            }
            lastRoll = true;
        } else {
            lastRoll = false;
        }

        if (rollsInFrame == 1) {
            score += 10;
        } else if (rollsInFrame == 2) {
            int roll1, roll2;
            roll1 = s[2*frame-2] - '0';
            roll2 = s[2*frame-1] - '0';
            score += roll1 + roll2;
        } else {
            int roll1, roll2, roll3;
            roll1 = s[2*frame-3] - '0';
            roll2 = s[2*frame-2] - '0';
            roll3 = s[2*frame-1] - '0';
            score += 10 + roll3;
        }
    }

    return score;
}