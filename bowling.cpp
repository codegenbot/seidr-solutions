int bowlingScore(string s) {
    int score = 0;
    bool inFrame = false;
    int currentRolls = 0;
    int frameNumber = 1;

    for (char c : s) {
        if (c == '/') {
            if (inFrame) {
                if (currentRolls == 2)
                    score += 10;
                else
                    score += currentRolls * 10;
            }
            inFrame = false;
            currentRolls = 0;
            frameNumber++;
        } else if (c == 'X') {
            score += 10;
            inFrame = true;
            currentRolls++;
        } else if (isdigit(c)) {
            int roll = c - '0';
            if (inFrame) {
                currentRolls++;
                if (currentRolls < 2)
                    score += roll;
                else
                    score += roll + 10;
            }
        }
    }

    return score;
}