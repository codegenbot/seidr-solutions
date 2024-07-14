int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls < 2) {
                score += 10 - (10 -stoi(string(1,c)))*2;
            } else {
                score += 10 + stoi(string(1,c));
            }
            currentFrame++;
            currentRolls = 0;
        } else if (c == 'X') {
            score += 10 + 10;
            currentFrame++;
            currentRolls = 0;
        } else {
            int points = stoi(string(1,c));
            score += points;
            currentRolls++;

            if (currentRolls < 2) {
                if (currentFrame == 10 && currentRolls == 1) {
                    score += 10 - points;
                }
            }
        }
    }

    return score;
}