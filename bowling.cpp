int bowlingScore(string s) {
    int score = 0;
    bool firstRollInFrame = true;
    int currentFrame = 1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            score += (firstRollInFrame ? 10 : getScoreFromRoll(s.substr(i-1, 1)));
            firstRollInFrame = false;
            currentFrame++;
            if (currentFrame > 10) break;
        }
    }

    return score;
}

int getScoreFromRoll(string roll) {
    int total = 0;
    for (char c : roll) {
        if (c == 'X') {
            total += 10;
        } else if (c == '/') {
            total += 10 - (total + 1);
        } else {
            total += c - '0';
        }
    }
    return total;
}