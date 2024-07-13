int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int strike = 1;
            int frameScore = 0;
            while (i < s.length() && strike > 0) {
                if (s[i] == '/') {
                    i++;
                    break;
                }
                frameScore += (s[i++] - '0');
                if (frameScore > 10) {
                    score += 10 + strike;
                    strike = 0;
                } else if (i < s.length() && s[i] == '/') {
                    i++;
                    strike--;
                }
            }
        } else {
            int frameScore = 0;
            for (int j = i; j < s.length() && s[j] != '/'; j++) {
                frameScore += (s[j] - '0');
            }
            score += frameScore;
            i = j;
        }
    }
    return score;
}