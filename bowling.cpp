int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    bool strike = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10;
            strike = true;
        } else if (s[i] == '/') {
            score += (roll1 + roll2);
            strike = false;
            roll1 = 0;
            roll2 = 0;
        } else {
            if (strike) {
                score += 10;
                strike = false;
            }
            roll1 = s[i] - '0';
        }

        if (i < s.length() - 1 && s[i + 1] == 'X') {
            i++;
        } else if (i < s.length() - 1 && s[i + 1] == '/') {
            i += 2;
        }
    }

    return score;
}