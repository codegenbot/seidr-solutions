int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += 10 + stoi(s.substr(i + 1, 1));
            i++;
        } else {
            roll1 = stoi(s.substr(i, 1));
            if (i < 8 && s[i + 1] != 'X' && s[i + 1] != '/') {
                roll2 = stoi(s.substr(i + 1, 1));
                if (roll1 + roll2 == 10) {
                    score += 10 + roll1;
                } else {
                    score += roll1 + roll2;
                }
            } else {
                score += roll1 + roll2;
            }
        }
    }
    return score;
}