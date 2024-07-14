int bowlingScore(string str) {
    int score = 0;
    bool firstRollInFrame = true;
    for (char c : str) {
        if (c == '/') {
            if (firstRollInFrame) {
                score += 10 - (str.find('/', str.find('/') + 1) - str.find('/'));
                firstRollInFrame = false;
            } else {
                score += 10;
            }
        } else if (c == 'X') {
            score += 10;
            firstRollInFrame = true;
        } else {
            int rollValue = c - '0';
            if (firstRollInFrame) {
                score += rollValue;
                firstRollInFrame = false;
            } else {
                score += rollValue;
            }
        }
    }
    return score;
}