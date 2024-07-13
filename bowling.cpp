int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (s[i-1] != 'X') {
                roll1 = stoi(s.substr(0, i));
                roll2 = 10 - roll1;
                score += roll1 + roll2;
            } else {
                score += 10;
            }
        } else if (s[i] == 'X') {
            score += 10;
        } else {
            int roll = stoi(s.substr(i, 1));
            score += roll;
        }
    }

    return score;
}