Here is the solution:

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int rollsRemainingInFrame = 2;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            score += getBowledPins(s, i);
            currentFrame++;
            rollsRemainingInFrame = 2;
            i++;
        } else if (isdigit(s[i])) {
            int pins = 0;
            while (i < s.size() && isdigit(s[i])) {
                pins = pins * 10 + s[i] - '0';
                i++;
            }
            if (rollsRemainingInFrame == 1) {
                score += getBowledPins(s, i);
            } else {
                rollsRemainingInFrame--;
                if (pins >= 10) {
                    rollsRemainingInFrame--;
                }
            }
        }
    }

    return score;
}

int getBowledPins(string s, int index) {
    int pins = 0;
    while (index < s.size() && s[index] == 'X') {
        pins += 10;
        index++;
    }
    while (index < s.size()) {
        if (s[index] != '/') {
            pins += s[index] - '0';
            index++;
        } else {
            break;
        }
    }
    return pins;
}