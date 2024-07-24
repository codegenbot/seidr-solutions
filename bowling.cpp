int bowlingScore(string s) {
    int score = 0;
    bool inFrame = false;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (!inFrame) {
                inFrame = true;
                currentRoll++;
            } else {
                inFrame = false;
                if (currentRoll > 1)
                    score += 10 + currentRoll - 2;
                else
                    score += 10;
                currentRoll = 0;
            }
        } else if (c == 'X') {
            score += 30;
            currentRoll = 0;
        } else {
            int roll = c - '0';
            if (!inFrame) {
                inFrame = true;
                currentRoll = roll;
            } else {
                score += roll;
                currentRoll--;
            }
        }
    }
    if (currentRoll > 1)
        score += 10 + currentRoll - 2;
    else
        score += 10;
    return score;
}