int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls;

    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                roll++;
                continue;
            }
            int frameScore = getFrameScore(rolls);
            score += frameScore;
            roll = 0;
        } else if (c == 'X') {
            score += 10 + getBonus(rolls, 1);
            roll = 0;
        } else if (isdigit(c)) {
            int pin = c - '0';
            rolls.push_back(pin);
            roll++;
        }
    }

    int frameScore = getFrameScore(rolls);
    score += frameScore;

    return score;
}

int getFrameScore(vector<int> rolls) {
    int score = 0;
    for (int i = 0; i < rolls.size(); i++) {
        if (i % 2 == 1 && rolls[i] != 10) {
            score += 5 + rolls[i];
        } else {
            score += rolls[i];
        }
    }
    return score;
}

int getBonus(vector<int> rolls, int bonusIndex) {
    int bonus = 0;
    for (int i = 0; i < rolls.size() - bonusIndex; i++) {
        if (i % 2 == 1 && rolls[i] != 10) {
            bonus += 5 + rolls[i];
        } else {
            bonus += rolls[i];
        }
    }
    return bonus;
}