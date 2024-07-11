int score(const string& bowls) {
    int totalScore = 0;
    int frame = 1;
    int rolls = 0;
    int frameScore = 0;
    int prevRoll = 0;
    bool isSpare = false;
    bool isStrike = false;
    
    for (char c : bowls) {
        if (c == 'X') {
            totalScore += 10;
            if (frame < 10) {
                if (isStrike) {
                    totalScore += 10;
                }
                isStrike = true;
                rolls = 0;
                frame++;
            }
        } else if (c == '/') {
            totalScore += 10 - prevRoll;
            if (frame < 10) {
                if (isSpare) {
                    totalScore += 10 - prevRoll;
                }
                isSpare = true;
                rolls = 0;
                frame++;
            }
        } else if (c == '-') {
            rolls++;
            if (rolls == 2) {
                frame++;
                rolls = 0;
            }
        } else {
            int pins = c - '0';
            totalScore += pins;
            if (frame < 10) {
                if (isSpare) {
                    totalScore += pins;
                    isSpare = false;
                }
                if (isStrike) {
                    totalScore += pins;
                }
                rolls++;
                if (rolls == 2) {
                    frame++;
                    rolls = 0;
                }
            }
            prevRoll = pins;
        }
    }
    return totalScore;
}