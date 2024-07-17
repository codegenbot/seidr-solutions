int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += 10 + (s[i+1] - '0');
            i++;
        } else {
            int frameScore = 0;
            for (int j = 0; j < 2; j++) {
                if (s[i+j] == 'X') {
                    frameScore += 30;
                    break;
                } else if (s[i+j] == '/') {
                    frameScore += 10;
                    i++;
                    break;
                } else {
                    frameScore += s[i+j] - '0';
                }
            }
            score += frameScore;
        }
    }
    return score;
}