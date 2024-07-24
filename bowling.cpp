int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += 10 + (s[i+1] - '0');
            i++;
        } else {
            int thisFrame = s[i] - '0';
            if (i < 8 && s[i+1] != '/') {
                thisFrame *= 2;
                if (s[i+2] == '/') {
                    thisFrame += s[i+3] - '0';
                }
            }
            score += thisFrame;
        }
    }
    return score;
}