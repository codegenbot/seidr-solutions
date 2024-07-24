int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls == 2) {
                score += 10 + getPreviousFrames();
                currentRolls = 0;
                currentFrame++;
            }
        } else if (isdigit(c)) {
            int roll = c - '0';
            if (currentRolls < 2) {
                if (roll == 10) {
                    score += 10 + getPreviousFrames();
                    currentRolls = 2;
                } else {
                    score += roll;
                    currentRolls++;
                }
            } else {
                int previousRolls = currentFrame - 1 ? min(roll, 2) : 0;
                score += previousRolls * 10 + getPreviousFrames() + roll;
                currentRolls = 0;
                currentFrame++;
            }
        }
    }

    return score;

}

int getPreviousFrames() {
    int sum = 0;
    for (int i = currentFrame - 1; i > 0; i--) {
        if (i == 9) {
            sum += min(10, frames[i]);
        } else {
            sum += frames[i];
        }
    }
    return sum;
}

// Initialize the score array
int frames[10] = {0};