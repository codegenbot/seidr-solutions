```cpp
int bowlingScore(std::string s) {
    int score = 0;
    bool inFrame = false;
    int currentRolls = 0;

    for (char c : s) {
        if (c == '/') {
            inFrame = true;
            currentRolls++;
        } else if (c == 'X') {
            score += 10;
            inFrame = false;
            currentRolls = 0;
        } else {
            int value = c - '0';
            if (!inFrame) {
                currentScore = value;
                currentRolls = 1;
            } else {
                if (value == 1 || value == 2) {
                    score += 10 - value;
                } else {
                    score += 10 + value;
                }
                inFrame = false;
                currentRolls = 0;
            }
        }

        if (currentRolls == 2) {
            if (!inFrame) {
                score += currentScore;
            }
            inFrame = false;
            currentRolls = 0;
        }
    }

    return score;
}