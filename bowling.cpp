int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls < 2) {
                score += 10 - (10 - stoi(string(1, c)) + 1);
            }
            currentRolls = 0;
            currentFrame++;
        } else {
            currentRolls++;
            score += c - '0';
        }
    }

    return score;
}