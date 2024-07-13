int bowlingScore(string frames) {
    int score = 0;
    int currentRoll = 0;
    int rollsInFrame = 0;

    for (char frame : frames) {
        if (isdigit(frame)) {
            currentRoll++;
            if (frame == 'X') {
                score += 10 + bowlingScoreHelper(frames, currentRoll);
                currentRoll = 0;
            } else if (currentRoll == 2) {
                int points = (frame - '0') * 2;
                score += points;
                currentRoll = 0;
            }
        } else {
            rollsInFrame++;
            if (rollsInFrame == 2) {
                if (frames[currentRoll] == '/') {
                    int firstRoll = frames[currentRoll-1] - '0';
                    int secondRoll = frames[currentRoll+1] - '0';
                    score += firstRoll + secondRoll;
                    currentRoll++;
                    rollsInFrame = 0;
                } else {
                    score += bowlingScoreHelper(frames, currentRoll);
                    currentRoll = 0;
                    rollsInFrame = 0;
                }
            }
        }
    }

    return score;
}

int bowlingScoreHelper(string frames, int start) {
    int score = 0;
    for (int i = start; i < start+2; i++) {
        if (frames[i] == 'X') {
            score += 10;
        } else if (isdigit(frames[i])) {
            score += (frames[i] - '0');
        } else {
            int firstRoll = frames[i-1] - '0';
            int secondRoll = frames[i+1] - '0';
            score += firstRoll + secondRoll;
        }
    }
    return score;
}