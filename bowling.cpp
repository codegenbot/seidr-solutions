int bowlingScore(string s) {
    int score = 0;
    bool firstRollInFrame = true;

    for (char c : s) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            continue;
        } else {
            int rolls = (firstRollInFrame ? 2 : 1);
            score += rolls * (c - '0');
            firstRollInFrame = false;
        }
    }

    return score;
}