int bowlingScore(const std::string& frames) {
    int score = 0;
    int currentRolls = 0;

    for (int i = 0; i < frames.size(); i++) {
        if (frames[i] == 'X') {
            score += 30;
            currentRolls = 2;
        } else if (frames[i] == '/') {
            score += (10 - currentRolls);
            currentRolls = 0;
        } else if (std::isdigit(frames[i])) {
            int roll = frames[i] - '0';
            currentRolls++;
            if (currentRolls == 2) {
                score += 1 * roll + 1 * (10 - roll);
            }
        }
    }

    return score;
}