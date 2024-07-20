int bowlingScore(string s) {
    int score = 0;
    int lastRoll = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (lastRoll == 10) {
                score += 10 + getRollValue(s.substr(currentFrame*2, 2));
                currentFrame++;
            } else {
                score += lastRoll + getRollValue(string(1,c));
                currentFrame++;
            }
            lastRoll = 0;
        } else if (c == 'X') {
            score += 10 + getRollValue(s.substr(currentFrame*2+1, 1));
            currentFrame++;
            lastRoll = 10;
        } else {
            int roll = c - '0';
            score += roll;
            lastRoll = roll;
        }
    }

    return score;
}

int getRollValue(string s) {
    if (s[0] == 'X') {
        return 10;
    } else if (s[0] == '/') {
        return s[1] - '0';
    } else {
        return s[0] - '0' + s[1] - '0';
    }
}