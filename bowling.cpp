int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int rollsLeftInFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (rollsLeftInFrame == 1) {
                score += 10 - (currentFrame < 10 ? stoi(s.substr(0, s.find('/'))) : 10);
            } else {
                score += 10;
            }
            currentFrame++;
            rollsLeftInFrame = 1;
        } else if (c == 'X') {
            score += 10;
            currentFrame++;
            rollsLeftInFrame = 1;
        } else {
            int rollValue = c - '0';
            score += rollValue;
            rollsLeftInFrame--;
            if (rollsLeftInFrame == 0) {
                currentFrame++;
                rollsLeftInFrame = 1;
            }
        }
    }

    return score;
}