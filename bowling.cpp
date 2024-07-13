int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (i + 2 < s.length() && s[i+1] != 'X') {
                score += (10 - (s[i-1] - '0')) + (10 - (s[i+1] - '0'));
            } else {
                score += 10;
            }
            frame++;
        } else if (s[i] == 'X') {
            score += 10;
            frame++;
        } else {
            int roll = s[i] - '0';
            if (frame == 9 && s[i+1] != 'X' && s[i+1] != '/') {
                score += 10 + roll;
            } else {
                score += roll;
            }
            if (i < s.length() - 1) {
                if (s[i+1] == 'X') {
                    frame++;
                } else if (s[i+1] == '/') {
                    i++;
                }
            }
        }
    }
    return score;
}