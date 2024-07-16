int bowlingScore(const string &score) {
    int scoreSoFar = 0;
    int nextRoll = 0;
    for (char c : score) {
        if (c == '/') {
            if (nextRoll == 10) {
                scoreSoFar += 10;
            } else {
                scoreSoFar += nextRoll + 10;
            }
            nextRoll = 0;
        } else if (isdigit(c)) {
            nextRoll = nextRoll * 10 + c - '0';
        }
    }
    return scoreSoFar;
}