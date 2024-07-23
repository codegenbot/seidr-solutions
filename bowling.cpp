int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int framescore = (s[i] - '0');
            if (i + 1 < s.size() && s[i+1] == '/') {
                framescore += (s[i+2] - '0');
                i++;
            }
            score += framescore;
        } else {
            score += 10;
        }
    }
    return score;
}