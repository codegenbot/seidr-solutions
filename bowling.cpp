int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls == 2) {
                score += 10 + getBonus(currentFrame);
                currentFrame++;
                currentRolls = 0;
            } else {
                score += getBonus(currentFrame);
                currentFrame++;
                currentRolls = 1;
            }
        } else if (c == 'X') {
            score += 10 + getBonus(currentFrame);
            currentFrame++;
            currentRolls = 2;
        } else {
            int roll = c - '0';
            score += roll;
            currentRolls++;
        }
    }

    return score;
}

int getBonus(int frame) {
    if (frame == 10) return 0;
    if (frame < 10 && s[frame*2+1] == '/') return 10;
    return 0;
}