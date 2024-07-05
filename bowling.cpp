int calculateBowlingScore(const char* s) {
    int score = 0;
    int currentRoll = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'X') {
            score += 30;
            currentRoll++;
        } else if (s[i] == '/') {
            score += 10 + currentRoll;
            if (currentRoll > 0) {
                int bonus = s[i+1] - '0' + s[i+2] - '0';
                score += bonus;
                i++; // Move to the next character
            }
        } else {
            int roll = s[i] - '0';
            score += roll;
            currentRoll++;
            if (currentRoll == 2) {
                if (i-1 >= 0 && s[i-1] == '/') {
                    score += roll * 2;
                } else {
                    score += roll * 2;
                    currentRoll = 0;
                }
            }
        }
    }
    return score; // Return the total score
}