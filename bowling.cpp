int calculateScore(string frames) {
    int score = 0;
    int currentFrame = 1;
    int lastRoll = 0;

    for (int i = 0; i < frames.length(); i++) {
        if(frames[i] == 'X') { // strike
            score += 10 + lastRoll * 2;
            currentFrame++;
        } else if(frames[i] == '/') { // spare
            score += 10 - lastRoll;
            currentFrame++;
        } else { // normal roll
            int thisRoll = frames[i] - '0';
            if(currentFrame < 10 && thisRoll + lastRoll > 10) {
                score += 10;
                currentFrame++;
            } else {
                score += thisRoll + lastRoll;
                currentFrame++;
                if(thisRoll == 1) {
                    score += frames[++i] - '0';
                    i++;
                }
            }
        }
        lastRoll = thisRoll;
    }

    return score;
}