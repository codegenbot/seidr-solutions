int bowlingScore(string s) {
    int score = 0;
    bool isLastRoll = false;
    int currentFrame = 1;
    int rollsInFrame = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (isLastRoll ? 10 : 20);
            isLastRoll = true;
            rollsInFrame = 2;
        } else if (c == '/') {
            int thisRoll = 10 - (currentFrame <= 9 ? s.find('/') : 0);
            if (currentFrame == 10) {
                score += thisRoll + (isLastRoll ? thisRoll : 20);
            } else {
                score += thisRoll;
            }
            isLastRoll = false;
            rollsInFrame = 2;
        } else {
            int thisRoll = c - '0';
            if (rollsInFrame == 1) {
                if (thisRoll + 10 <= s.length() && s.substr(s.find(c), 3).find('/') != string::npos) {
                    score += 20;
                } else {
                    score += thisRoll + 10;
                }
            } else {
                score += thisRoll;
            }
            rollsInFrame--;
        }

        if (currentFrame < 10) {
            currentFrame++;
        }
    }

    return score;
}