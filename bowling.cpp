int bowlingScore(string &s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '/') {
            int firstRoll = stoi(s.substr(i - 1, 1));
            int secondRoll = stoi(s.substr(i + 1, 1));
            score += getFrameScore(firstRoll, secondRoll);
            currentFrame++;
            i++; // skip the '/'
        }
    }
    return score;
}

int getFrameScore(int firstRoll, int secondRoll) {
    if (firstRoll == 10) {
        return firstRoll + secondRoll;
    } else if (firstRoll + secondRoll >= 10) {
        return 10 + strikeBonus();
    } else {
        return firstRoll + secondRoll;
    }
}

int strikeBonus() {
    int bonus = 0;
    for (int i = 0; i < 2; ++i) {
        if (s[i + 1] == '/') {
            bonus += getFrameScore(stoi(s.substr(i, 1)), stoi(s.substr(i + 2, 1)));
        } else {
            bonus += stoi(s.substr(i, 1));
        }
    }
    return bonus;
}