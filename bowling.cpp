int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (currentFrame < 10 ? getBonus(s, i+1) : 0);
            currentFrame++;
        } else if (s[i] == '/') {
            int left = s[i-1] - '0';
            int right = s[i+1] - '0';
            score += left + right;
            currentFrame++;
        } else {
            int pin = s[i] - '0';
            score += pin;
            if (currentFrame < 10) {
                if (i+2 < s.length() && s[i+2] == 'X') {
                    score += getBonus(s, i+1);
                    currentFrame++;
                } else if (i+3 < s.length() && s[i+2] == '/') {
                    score += getBonus(s, i+1);
                    currentFrame++;
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
            bonus += 10;
        } else if (s[i] == '/') {
            int left = s[i-1] - '0';
            int right = s[i+1] - '0';
            bonus += left + right;
            return bonus;
        } else {
            bonus += s[i] - '0';
        }
    }
    return bonus;
}