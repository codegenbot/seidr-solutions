int bowlingScore(string s) {
    int score = 0;
    bool inFrame = false;
    int currentRoll = 0;

    for (char c : s) {
        if (c == '/') {
            inFrame = true;
        } else if (isdigit(c)) {
            currentRoll = currentRoll * 10 + (c - '0');
            if (!inFrame) continue;
        } else { // X or -
            if (X == c) score += 10;
            else if (c == '-') {
                if (inFrame) {
                    if (currentRoll > 0) score += currentRoll;
                    inFrame = false;
                }
            }
        }
    }

    return score;
}