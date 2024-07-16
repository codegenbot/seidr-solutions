int bowlingScore(string s) {
    int score = 0;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // Strike
            score += 10 + getBonus(s, i);
        } else if (s[i] == '/') { // Spare
            score += 5 + getBonus(s, i);
        } else { // Normal roll
            int roll = s[i] - '0';
            if (i < 8 && s[i+1] != '/') {
                score += roll + (s[i+1] - '0');
            } else {
                score += roll;
            }
        }
    }

    return score;
}

int getBonus(string s, int i) {
    int bonus = 0;

    for (int j = i + 1; j < i + 3; j++) { // Check for Strike or Spare
        if (s[j] == 'X') { // Strike
            bonus += 10;
        } else if (s[j] == '/') { // Spare
            bonus += 5;
        } else { // Normal roll
            bonus += s[j] - '0';
        }
    }

    return bonus;
}