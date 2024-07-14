int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls < 2) {
                score += 10 - (10 -stoi(string(1,c))) ;
                currentRolls = 2;
            } else {
                score += 10;
                currentFrame++;
                currentRolls = 0;
            }
        } else if (c == 'X') {
            score += 10;
            currentFrame++;
            currentRolls = 0;
        } else {
            int roll = stoi(string(1,c));
            score += roll;
            currentRolls++;

            if (currentRolls < 2) {
                continue;
            }

            currentFrame++;
            currentRolls = 0;

            if (roll + stoi(string(1,c)) == 10) {
                score += 10;
            } else {
                score += roll;
            }
        }
    }

    return score;
}