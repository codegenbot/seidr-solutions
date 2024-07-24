int bowlingScore(string s) {
    int score = 0;
    bool inFrame = false;
    int currentFrame = 0;
    int totalInFrame = 0;

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            int pin = s[i] - '0';
            if (inFrame) {
                totalInFrame += pin;
                if (totalInFrame == 2) {
                    inFrame = false;
                    score += calculateScore(currentFrame, totalInFrame);
                    currentFrame++;
                    totalInFrame = 0;
                }
            } else {
                totalInFrame = pin;
                inFrame = true;
            }
        } else {
            if (s[i] == '/') {
                int firstPin = s[i - 1] - '0';
                int secondPin = s[i + 1] - '0';
                score += calculateScore(currentFrame, firstPin);
                totalInFrame = secondPin;
                inFrame = true;
                currentFrame++;
            }
        }
    }

    if (inFrame) {
        score += calculateScore(10, totalInFrame);
    } else {
        for (int i = 0; i < currentFrame; i++) {
            score += calculateScore(i + 1, totalInFrame);
            totalInFrame = 0;
        }
    }

    return score;
}

int calculateScore(int frame, int pins) {
    if (frame == 10) {
        return 10 + pins;
    } else if (pins >= 2) {
        return 10;
    } else {
        return pins;
    }
}