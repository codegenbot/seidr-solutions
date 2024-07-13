int bowlingScore(string s) {
    int score = 0;
    bool strike = false;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
            strike = true;
        } else if (isdigit(s[i])) {
            int firstRoll = s[i] - '0';
            if (i != 9) {
                char nextChar = s[i+1];
                if (nextChar == '/') {
                    int secondRoll = 10 - firstRoll;
                    score += firstRoll + secondRoll;
                    strike = false;
                } else if (isdigit(nextChar)) {
                    int secondRoll = nextChar - '0';
                    score += firstRoll + secondRoll;
                    strike = false;
                }
            } else {
                score += firstRoll;
                strike = false;
            }
        }
    }
    if (strike) {
        score += 10;
    }
    return score;
}