int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (currentFrame < 10 ? getBonus(s, i+1) : 0);
            currentFrame++;
        } else if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            score += firstRoll + secondRoll;
            currentFrame++;
        } else {
            int roll = s[i] - '0';
            if (currentFrame < 10) {
                score += roll;
                if (i < s.length() - 1 && s[i+1] == '/') {
                    i++; // skip the '/'
                }
            }
            currentFrame++;
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
            return bonus;
        } else {
            bonus += s[i] - '0';
        }
    }
    return bonus;
}