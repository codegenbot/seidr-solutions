int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int rollsLeftInFrame = 2;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '/') {
            if (isdigit(s[i])) {
                int pinsThisRoll = s[i] - '0';
                score += pinsThisRoll;
                if (--rollsLeftInFrame == 0) {
                    rollsLeftInFrame = 2;
                    currentFrame++;
                }
            } else {
                // Strike!
                score += 10 + bowlingScore(s.substr(i + 1));
                i += 6; // Skip the 'X' and the next two characters
                currentFrame++;
                rollsLeftInFrame = 2;
            }
        } else {
            if (rollsLeftInFrame == 1) {
                int pinsThisRoll = 10;
                score += pinsThisRoll;
                currentFrame++;
                rollsLeftInFrame = 2;
                i++; // Skip the '/'
            } else {
                int pinsThisRoll = s[i + 1] - '0';
                if (s[i + 2] != '/') {
                    pinsThisRoll = 10 - s[i + 2] - '0' + pinsThisRoll;
                }
                score += pinsThisRoll;
                currentFrame++;
                rollsLeftInFrame = 1;
                i++; // Skip the '/'
            }
        }
    }
    return score;
}