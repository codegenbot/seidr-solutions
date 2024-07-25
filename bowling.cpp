int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int totalRolls = s.length();

    for (int i = 0; i < totalRolls; i++) {
        if (isdigit(s[i])) {
            int roll = s[i] - '0';
            if (currentFrame == 10) {
                score += roll + (i < totalRolls-1 && isdigit(s[i+1]) ? 0 : 10);
            } else {
                score += roll;
                if (i < totalRolls-1 && s[i+1] != '/') {
                    currentFrame++;
                }
            }
        } else {
            score += 10;
            currentFrame = 11; // Finish the frame
        }
    }

    return score;
}