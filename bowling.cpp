Here is the solution:

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int rollsInFrame = 0;

    for (char c : s) {
        if (c == 'X') { // strike
            score += 10 + getBonusForStrike(currentFrame);
            currentFrame++;
            rollsInFrame = 0;
        } else if (c != '/') {
            int pins = c - '0';
            if (rollsInFrame == 1) { // second roll in frame
                if (currentFrame < 9 && s[currentFrame*2 + 1] == 'X') { // spare
                    score += pins + getBonusForSpare(currentFrame);
                } else {
                    score += pins;
                }
            } else { // first roll in frame
                rollsInFrame++;
            }
        }
    }

    return score;
}

int getBonusForStrike(int frame) {
    if (frame < 9) {
        if (s[frame*2] == 'X') {
            return 10 + getBonusForStrike(frame+1);
        } else {
            return s[frame*2 - '0'] + s[frame*2 - '0'];
        }
    } else {
        return 0;
    }
}

int getBonusForSpare(int frame) {
    if (frame < 8) {
        return s[(frame+1)*2] - '0';
    } else {
        return 0;
    }
}