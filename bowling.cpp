int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls < 2) {
                score += 10 - (10 - stoi(string(1, c)))*2;
            }
            currentRolls = 0;
            currentFrame++;
        } else {
            currentRolls++;
            if (c == 'X') {
                score += 10 + (currentFrame < 10 ? 10 : 0);
            } else if (c == '-') {
                score += 10 - stoi(string(1, c));
            } else {
                score += stoi(string(1, c));
            }
        }
    }

    return score;
}