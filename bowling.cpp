int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int strike = 1;
            while (i + 2 <= s.length() && s[i+1] != '/') {
                i++;
                strike++;
            }
            score += strike * 10;
        } else {
            int firstRoll = s[i] - '0';
            int secondRoll = s[i + 1] - '0';
            if (s[i + 2] == '/') {
                score += firstRoll + secondRoll;
            } else {
                score += firstRoll + secondRoll;
            }
        }
    }
    return score;
}