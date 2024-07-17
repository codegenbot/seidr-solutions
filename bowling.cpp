int bowlingScore(string s) {
    int score = 0;
    bool firstRollInFrame = true;

    for (char c : s) {
        if (c == '/') {
            if (firstRollInFrame) {
                score += 10 - (10 -stoi(string(1,c))) + min(stoi(string(1,c)),10);
            } else {
                score += min(stoi(string(1,c)),10);
            }
            firstRollInFrame = true;
        } else if (c == 'X') {
            score += 10;
            firstRollInFrame = false;
        } else {
            int roll = stoi(string(1,c));
            if (firstRollInFrame) {
                score += roll + min(roll,10);
                firstRollInFrame = false;
            } else {
                score += roll;
            }
        }
    }

    return score;
}