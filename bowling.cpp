int bowlingScore(string s) {
    int score = 0;
    bool isPreviousFrameStrike = false;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') { // strike
            score += 10 + (isPreviousFrameStrike ? 10 : getBonusFromPreviousFrames(s, i)));
            isPreviousFrameStrike = true;
        } else if (s[i] == '/') { // spare
            int bonus = getBonusFromPreviousFrames(s, i);
            score += 10 + bonus;
            isPreviousFrameStrike = false;
        } else { // normal frame
            int firstRoll = s[i] - '0';
            int secondRoll = s[i+1] - '0';
            if (secondRoll == 'X') { // strike in the next roll
                score += firstRoll + 10;
                isPreviousFrameStrike = true;
            } else if (secondRoll == '/') { // spare in the next roll
                score += firstRoll + getBonusFromPreviousFrames(s, i+2);
                isPreviousFrameStrike = false;
            } else {
                score += firstRoll + secondRoll;
                isPreviousFrameStrike = false;
            }
        }
    }
    return score;
}

int getBonusFromPreviousFrames(string s, int frameIndex) {
    if (frameIndex < 0 || frameIndex >= s.length())
        return 0;
    for (int i = frameIndex; i > 0; --i) {
        if (s[i] == 'X' || s[i] == '/')
            return s[i] == 'X' ? 10 : getBonusFromPreviousFrames(s, i-1);
    }
    return 0;
}