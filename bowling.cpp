int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int strikeOrSpare = 0;
            if (i < 9 && s[i+1] == '/') {
                strikeOrSpare = 10 - (s[i] - '0');
            }
            score += (s[i] - '0') + strikeOrSpare;
        } else {
            int firstRoll = s[i] - '0';
            if (i < 9 && s[i+1] == '/') {
                int secondRoll = 10 - firstRoll;
                score += firstRoll + secondRoll;
            } else {
                int secondRoll = s[i+1] - '0';
                score += firstRoll + secondRoll;
            }
        }
    }
    return score;
}