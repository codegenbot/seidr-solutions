int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (currentFrame < 10 ? getBonus(s, i+1) : 0);
            currentFrame++;
        } else if (s[i] == '/') {
            int ballsLeft = 2;
            while (ballsLeft--) {
                if (s[i+1] == 'X') {
                    score += 10 + (currentFrame < 10 ? getBonus(s, i+2) : 0);
                    currentFrame++;
                    break;
                } else {
                    int pins = s[i+1] - '0';
                    if (pins == 10) {
                        score += 10;
                    } else {
                        score += pins;
                    }
                    i++; ballsLeft--;
                }
            }
            currentFrame++;
        } else {
            int ballsLeft = 2;
            while (ballsLeft--) {
                if (s[i+1] == 'X') {
                    score += 10 + getBonus(s, i+2);
                    break;
                } else {
                    int pins = s[i] - '0' + s[i+1] - '0';
                    if (pins > 10) {
                        pins = 10;
                    }
                    score += pins;
                    i++; ballsLeft--;
                }
            }
        }
    }
    return score;
}

int getBonus(string s, int start) {
    int bonus = 0;
    for (int i = start; i < s.length(); i++) {
        if (s[i] == 'X') {
            bonus += 10 + (i+1 < s.length() ? getBonus(s, i+1) : 0);
            break;
        } else if (s[i] == '/') {
            int ballsLeft = 2;
            while (ballsLeft--) {
                if (s[i+1] == 'X') {
                    bonus += 10 + getBonus(s, i+2);
                    break;
                } else {
                    int pins = s[i+1] - '0';
                    if (pins == 10) {
                        bonus += 10;
                    } else {
                        bonus += pins;
                    }
                    i++; ballsLeft--;
                }
            }
            break;
        } else {
            int ballsLeft = 2;
            while (ballsLeft--) {
                if (s[i+1] == 'X') {
                    bonus += 10 + getBonus(s, i+2);
                    break;
                } else {
                    int pins = s[i] - '0' + s[i+1] - '0';
                    if (pins > 10) {
                        pins = 10;
                    }
                    bonus += pins;
                    i++; ballsLeft--;
                }
            }
        }
    }
    return bonus;
}