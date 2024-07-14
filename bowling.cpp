int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            int firstPin = stoi(s.substr(0, i));
            int secondPin = stoi(s.substr(i + 1));
            score += getPointsInFrame(firstPin, secondPin);
            currentFrame++;
        }
    }
    return score;
}

int getPointsInFrame(int pins1, int pins2) {
    if (pins1 == 10) {
        return 10 + getPointsInNextTwoFrames();
    } else if (pins1 + pins2 >= 10) {
        return 10 + getPointsInRemainingPins(pins1 + pins2);
    } else {
        return pins1 + pins2;
    }
}

int getPointsInNextTwoFrames() {
    int score = 0;
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            int firstPin = s[i * 3];
            int secondPin = s[i * 3 + 1];
            int thirdPin = s[i * 3 + 2] - 'X';
            score += getPointsInFrame(firstPin, secondPin);
        } else {
            if (s[i * 3] == 'X') {
                return 10;
            } else {
                return 10 + getPointsInRemainingPins(stoi(s.substr(i * 3)));
            }
        }
    }
    return score;
}

int getPointsInRemainingPins(int pins) {
    if (pins > 7) {
        return 10;
    } else {
        return pins;
    }
}