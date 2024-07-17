int bowlingScore(string input) {
    int score = 0;
    int roll = 0;
    bool inTurn = false;

    for (char c : input) {
        if (c >= 'X' && c <= 'Z') {
            if (!inTurn) {
                inTurn = true;
                roll = 10 - 'X';
            } else {
                score += roll;
                roll = 0;
            }
        } else if (c == '/') {
            inTurn = false;
        } else {
            int temp = c - '0';
            if (!inTurn) {
                roll += temp;
            } else {
                score += temp;
            }
        }
    }

    return score;
}