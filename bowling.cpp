int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int frames = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRolls = 2;
            frames++;
        } else if (c == '/') {
            score += currentRolls * 10 + 10 - '0';
            currentRolls = 0;
            frames++;
        } else if (isdigit(c)) {
            int roll = c - '0';
            currentRolls++;

            if (currentRolls == 2) {
                if (frames < 9 && s[20-frames] != '/' && s[20-frames] != 'X') {
                    score += roll * 10;
                } else {
                    score += roll * 10 + 10 - '0';
                }
                frames++;
            }
        }
    }

    return score;
}