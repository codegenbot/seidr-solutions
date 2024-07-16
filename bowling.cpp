int scoreBowlingRound(string s) {
    int score = 0;
    int frame = 0;
    int rolls = 0;
    for (char c : s) {
        rolls++;
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                score += (s[rolls] == 'X' ? 10 : (isdigit(s[rolls]) ? s[rolls] - '0' : 10));
                if (s[rolls+1] == '/') score += 10 - (s[rolls] == 'X' ? 0 : (isdigit(s[rolls]) ? s[rolls] - '0' : 10));
            }
            frame++;
        } else if (c == '/') {
            score += 10 - (s[rolls-1] - '0');
            if (frame < 9) score += (isdigit(s[rolls]) ? s[rolls] - '0' : 10);
            frame++;
        } else if (isdigit(c)) {
            score += c - '0';
            if (frame < 9 && rolls % 2 == 0 && s[rolls-1] == '/') score += c - '0';
        }
    }
    return score;
}