int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            int firstRoll = stoi(s.substr(0, i));
            int secondRoll = stoi(s.substr(i + 1));
            if (secondRoll == 10) {
                score += 10 + firstRoll;
            } else {
                score += firstRoll + secondRoll;
            }
        } else {
            int roll = stoi(s.substr(i, 1));
            if (roll < 10) {
                score += roll;
            } else {
                score += 10 + roll - 10;
            }
        }
    }
    return score;
}