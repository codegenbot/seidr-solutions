int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls == 2) {
                score += 10;
                currentFrame++;
                currentRolls = 0;
            } else {
                score += 10 - (10 -stoi(string(1,c)));
                currentRolls = 0;
            }
        } else {
            currentRolls++;
            if (currentRolls == 2) {
                if (c == 'X') {
                    score += 30;
                    currentFrame++;
                    currentRolls = 0;
                } else {
                    score += 10 + stoi(string(1,c));
                    currentFrame++;
                    currentRolls = 0;
                }
            } else {
                score += stoi(string(1,c));
            }
        }
    }

    return score;
}