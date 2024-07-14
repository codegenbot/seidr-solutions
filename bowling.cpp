int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // strike
            score += 10 + (i < 9 ? 10 : 0);
        } else if (s[i] == '/') { // spare
            score += 10;
        } else {
            roll1 = s[i] - '0';
            if (i < 8 && s[i+1] == 'X') { // strike in next frame
                score += roll1 + 10;
            } else if (i < 8 && s[i+1] == '/') { // spare in next frame
                score += roll1 + 10;
            } else {
                roll2 = s[i+1] - '0';
                score += roll1 + roll2;
            }
        }
    }
    return score;
}