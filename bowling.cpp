int bowlingScore(string input) {
    int score = 0;
    bool firstRollInFrame = true;

    for (char c : input) {
        if (c == 'X') {
            score += 30;
            firstRollInFrame = true;
        } else if (c == '/') {
            score += 10 - (firstRollInFrame ? 0 : 1);
            firstRollInFrame = false;
        } else if (isdigit(c)) {
            int roll = c - '0';
            if (firstRollInFrame) {
                score += roll + (input[input.size() - input.find('/')] - '0');
                firstRollInFrame = false;
            } else {
                score += roll;
            }
        }
    }

    return score;
}