```c++
int calculateBowlingScore(string input) {
    int score = 0;
    int currentRolls = 0;
    int currentScore = 0;
    bool inFrame = false;

    for (char c : input) {
        if (c == '/') {
            inFrame = false;
            currentRolls = 2;
            currentScore = 0;
        } else if (isdigit(c)) {
            currentScore = currentScore * 10 + (c - '0');
            currentRolls++;
            if (!inFrame) {
                inFrame = true;
            }
        }
        if (currentRolls == 2) {
            if (currentScore >= 10) {
                score += 10;
            } else {
                score += currentScore;
            }
            currentScore = 0;
            inFrame = false;
            currentRolls = 0;
        }
    }

    if (!inFrame && currentScore > 0) {
        score += currentScore;
    }
    return score;
}