int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c != '/') {
            if (c == 'X') {
                score += 10 + 10;
                currentRolls = 2;
            } else if (c >= '1' && c <= '9') {
                int rolls = c - '0';
                score += rolls * 10;
                currentRolls = rolls;
            } else {
                score += 10;
                currentRolls = 2;
            }
        } else {
            if (currentFrame < 10) {
                currentFrame++;
            }
        }

        if (currentRolls == 0) continue;

        if (currentRolls == 1) {
            if (c == 'X') score += 10 + nextRoll(s, currentFrame);
            else if (c >= '1' && c <= '9') score += c - '0' + nextRoll(s, currentFrame);
            else score += 10;
        } else {
            score += c - '0';
        }

        currentRolls--;
    }

    return score;
}

int nextRoll(string s, int frame) {
    for (char c : s) {
        if (c == '/') break;
        if (frame > c - '1') return c - '0';
    }
    return 10;
}