int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int rollsLeftInFrame = 2;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            // Store the number of pins knocked down in this frame
            int pinsKnockedDown = stoi(s.substr(i - 2, 1));
            if (currentFrame == 10) {
                rollsLeftInFrame = 1;
            }
            currentFrame++;

            if (rollsLeftInFrame == 1) {
                // If we're on the last roll of a frame and it's not a strike
                if (pinsKnockedDown < 10) {
                    score += pinsKnockedDown + bowlingScore(s.substr(i + 1));
                    break;
                }
            }

            rollsLeftInFrame = 2;
        } else if (s[i] == 'X') {
            // If we're on a strike
            if (currentFrame < 10) {
                score += 10 + bowlingScore(s.substr(i + 4));
            } else {
                score += 10;
            }
            currentFrame++;
            rollsLeftInFrame = 2;
        } else {
            int pinsKnockedDown = stoi(s.substr(i, 1));
            if (currentFrame == 10) {
                rollsLeftInFrame = 1;
            }

            if (rollsLeftInFrame == 1) {
                // If we're on the last roll of a frame and it's not a strike
                score += pinsKnockedDown + bowlingScore(s.substr(i + 2));
                break;
            }
        }
    }
    return score;
}