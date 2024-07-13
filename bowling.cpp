int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += 10 + (10 - (s[i+1]-'0')) * 2;
            i++;
        } else {
            int frame = s[i] - '0';
            if (i < 8 && s[i+1] != '/') {
                if (s[i+1] == 'X') {
                    score += 10 + frame * 2 + 30;
                    i++;
                } else {
                    score += 10 + frame * 2 + s[i+1]-'0';
                    i++;
                }
            } else {
                score += 10 + frame * 2;
            }
        }
    }
    return score;
}