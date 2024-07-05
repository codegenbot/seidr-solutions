```c++
int bowlingScore(const char* s) {
    int score = 0;
    int currentRoll = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'X') {
            // Strike! Add 10 + next two rolls (if they exist)
            if (i + 2 < strlen(s)) {
                score += 10 + (s[i+1] - '0') * 2 + (s[i+2] - '0');
            } else {
                score += 10 + currentRoll * 2;
            }
        } else if (s[i] == '/') {
            // Spare! Add 10 to the score
            score += 10;
            currentRoll = 0; // Reset roll counter
        } else {
            int roll = s[i] - '0';
            score += roll;
            currentRoll++;

            // If we've had two rolls, add their sum (if not a strike)
            if (currentRoll == 2) {
                if (s[i+1] != 'X' && s[i+1] != '/') {
                    score += roll * 2;
                } else {
                    currentRoll = 0; // Reset roll counter
                }
            }
        }
    }

    return score;
}