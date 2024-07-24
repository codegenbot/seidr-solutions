int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool firstRollInFrame = true;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + ((firstRollInFrame) ? 10 : 20);
            roll++;
            firstRollInFrame = false;
        } else if (c == '/') {
            int nextRoll = s.find('/');
            string leftSide = s.substr(0, nextRoll);
            string rightSide = s.substr(nextRoll + 1);

            score += ((firstRollInFrame) ? stof(leftSide) : stof(leftSide) + stof(rightSide));
            roll++;
            firstRollInFrame = (leftSide.length() == 2);
        } else {
            if (firstRollInFrame) {
                score += c - '0';
                firstRollInFrame = false;
            } else {
                score += c - '0' + ((roll < 9) ? stof(to_string(c - '0')) : 10);
            }
            roll++;
        }
    }

    return score;
}