int bowlingScore(string s) {
    int score = 0;
    bool strike = false;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            strike = true;
        } else if (c == '/') {
            if (strike) {
                score += 10;
                strike = false;
            }
        } else {
            int frameScore = 0;
            if (c != '5' && c != '0') {
                int firstRoll = c - '0';
                char secondRoll = s[s.find(c) + 1];
                if (secondRoll == '/') {
                    frameScore += firstRoll + 10;
                } else {
                    int secondRollValue = secondRoll - '0';
                    frameScore += firstRoll + secondRollValue;
                }
            } else {
                frameScore += c - '0';
            }
            score += frameScore;
        }
    }
    return score;
}