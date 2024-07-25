int bowlingScore(string s) {
    int score = 0;
    int frames = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + getBonus(s, frames);
            frames++;
        } else if (c == '/') {
            score += getFirstTwoRolls(s, frames);
            frames++;
        } else {
            int roll = c - '0';
            if (frames < 9) {
                score += roll;
                if (frames < 8) {
                    score += getBonus(s, frames);
                }
            } else {
                score += roll + getFirstTwoRolls(s, frames);
            }
            frames++;
        }
    }
    return score;
}

int getFirstTwoRolls(string s, int frames) {
    for (int i = 0; i < 2 && frames < 9; i++) {
        if (s[frames * 2 + i] == 'X') {
            return 10 - i;
        } else if (s[frames * 2 + i] == '/') {
            int roll1 = s[frames * 2] - '0';
            int roll2 = s[frames * 2 + 1] - '0';
            return roll1 + roll2;
        }
    }
    return 0;
}

int getBonus(string s, int frames) {
    for (int i = 0; i < 2 && frames < 9; i++) {
        if (s[frames * 2 + i] == 'X') {
            return 10 - i;
        } else if (s[frames * 2 + i] == '/') {
            int roll1 = s[frames * 2] - '0';
            int roll2 = s[frames * 2 + 1] - '0';
            return roll1 + roll2;
        }
    }
    return 0;
}