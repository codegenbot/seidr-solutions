int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int firstRoll = s[i - 1] - '0';
            int secondRoll = s[i + 1] - '0';
            score += firstRoll + secondRoll;
        } else {
            int rolls = 0;
            for (int j = i; j < 10; j++) {
                if (s[j] == '/') {
                    break;
                }
                rolls++;
            }
            score += rolls * s[i] - '0';
        }
    }
    return score;
}