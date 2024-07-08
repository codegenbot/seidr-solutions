int bowlingScore(std::string s) {
    int score = 0;
    bool lastRollWasStrike = false;
    bool lastRollWasSpare = false;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (lastRollWasStrike ? 10 : (lastRollWasSpare ? 5 : 0));
            lastRollWasStrike = true;
            lastRollWasSpare = false;
        } else if (c == '/') {
            int nextTwoRolls = std::stoi(s.substr(s.find('/') + 1, 2)) * 10 / 2;
            score += (lastRollWasStrike ? 10 : (lastRollWasSpare ? 5 : 0));
            score += nextTwoRolls;
            lastRollWasStrike = false;
            lastRollWasSpare = true;
        } else {
            score += c - '0';
            if (c == '9') lastRollWasSpare = true;
            else lastRollWasStrike = true;
        }
    }

    return score;
}