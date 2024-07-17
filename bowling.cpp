int bowlingScore(string s) {
    int score = 0;
    bool lastRollWasStrike = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') { // strike
            score += 10 + (lastRollWasStrike ? 10 : bowlingScoreForFrame(s.substr(i+1)));
            lastRollWasStrike = true;
        } else if (s[i] == '/') { // spare
            int thisFrameScore = 10 - s.find('/');
            score += thisFrameScore + (lastRollWasStrike ? 0 : bowlingScoreForFrame(s.substr(i+2)));
            lastRollWasStrike = false;
        } else { // normal roll
            if (s[i] == '5') {
                int thisFrameScore = 5;
                i++; // skip the next character, which is either a '/' or 'X'
                score += thisFrameScore + (lastRollWasStrike ? 0 : bowlingScoreForFrame(s.substr(i)));
                lastRollWasStrike = false;
            } else {
                int thisFrameScore = s[i] - '0';
                score += thisFrameScore + (lastRollWasStrike ? 0 : bowlingScoreForFrame(s.substr(i+1)));
                lastRollWasStrike = false;
            }
        }
    }
    return score;
}

int bowlingScoreForFrame(string frame) {
    int pins = 0;
    for (char c : frame) {
        if (c == 'X') {
            pins += 10;
        } else if (c == '/') {
            int remainingPins = 10 - (frame.find('/') - 1);
            pins += 10 - remainingPins;
        } else {
            pins += c - '0';
        }
    }
    return pins;
}