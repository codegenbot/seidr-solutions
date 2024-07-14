int bowlingScore(string s) {
    int score = 0;
    bool lastRollWasStrike = false;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (lastRollWasStrike ? 10 : 20);
            lastRollWasStrike = true;
        } else if (c == '/') {
            int nextTwoRolls = stoi(s.substr(s.find('/')+1,2));
            score += 10 - nextTwoRolls;
            lastRollWasStrike = false;
        } else {
            int roll = c - '0';
            if (lastRollWasStrike) {
                score += roll;
                lastRollWasStrike = false;
            } else {
                score += roll * 2;
            }
        }
    }
    return score;
}