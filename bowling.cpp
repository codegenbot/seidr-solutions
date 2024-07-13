int bowlingScore(string bowls) {
    int score = 0;
    bool inFrame = false;
    int currentRoll = 0;
    int previousFrames = 0;

    for (char bowl : bowls) {
        if (bowl == '/') {
            if (inFrame) {
                score += 10 + previousFrames;
                inFrame = false;
            }
            continue;
        }

        inFrame = true;
        currentRoll++;

        if (isdigit(bowl)) {
            int bowlVal = bowl - '0';
            score += bowlVal;

            if (currentRoll == 2) {
                previousFrames = score - 10;
                score -= previousFrames;
                previousFrames = 0;
                inFrame = false;
                currentRoll = 0;
            }
        } else if (bowl == 'X') {
            score += 10;
            previousFrames = 10;
            inFrame = false;
            currentRoll = 0;
        } else {
            int bowlVal = bowl - '0';
            score += bowlVal;
            previousFrames = bowlVal;
            inFrame = false;
            currentRoll = 0;
        }
    }

    if (inFrame) {
        score += previousFrames;
    }

    return score;
}