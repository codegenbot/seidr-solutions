int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (isdigit(s[i])) {
            int frameScore = 0;
            if (s[i+1] == '/') {
                roll1 = s[i] - '0';
                roll2 = s[i+1] - '0' + 1;
                frameScore = roll1 + roll2;
            } else {
                roll1 = s[i] - '0';
                roll2 = s[i+1] - '0';
                frameScore = roll1 + roll2;
            }
            score += frameScore;
        }
    }
    return score;
}