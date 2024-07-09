int bowlingScore(string s) {
    int score = 0;
    bool lastRollWasStrike = false;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // strike
            score += 10 + (lastRollWasStrike ? 10 : bowlingForThisFrame(s, i)));
            lastRollWasStrike = true;
        } else if (isdigit(s[i])) { // normal roll
            int thisRoll = s[i] - '0';
            if (i < 8 && s[i+1] == '/') {
                score += thisRoll + bowlingForThisFrame(s, i+2);
                lastRollWasStrike = false;
            } else {
                score += thisRoll;
                lastRollWasStrike = false;
            }
        }
    }
    return score;
}

int bowlingForThisFrame(string s, int start) {
    int frameScore = 0;
    for (int i = start; i < start+3; i++) {
        if (s[i] == 'X') { // strike
            return 10 + bowlingForThisFrame(s, i);
        } else if (isdigit(s[i])) { // normal roll
            int thisRoll = s[i] - '0';
            frameScore += thisRoll;
            if (i < start+2 && s[i+1] == '/') {
                return frameScore + 10;
            }
        }
    }
    return frameScore;
}