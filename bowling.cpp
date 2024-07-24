int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (currentFrame < 10 ? getBonus(s, i+1) : 0);
            currentFrame++;
        } else if (s[i] == '/') {
            int pins = 10 - (s[i-1] - '0');
            int nextPins = s[i+1] - '0';
            score += pins + nextPins;
            currentFrame++;
        } else {
            int pins = s[i] - '0' + (s[i+1] == 'X' ? 10 : s[i+1] - '0');
            score += pins;
            if (currentFrame < 9) {
                currentFrame++;
            }
        }
    }
    return score;
}

int getBonus(string s, int i) {
    int bonus = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            bonus += 10 + (getBonus(s, i+1) > 0 ? getBonus(s, i+1) : 0);
            return bonus;
        } else if (s[i] == '/') {
            int pins = 10 - (s[i-1] - '0');
            int nextPins = s[i+1] - '0';
            bonus += pins + nextPins;
            return bonus;
        }
        i++;
    }
    return bonus;
}