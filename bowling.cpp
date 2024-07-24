int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + 10;
            frame++;
        } else if (c == '/') {
            score += 10 - (10 - (s[s.find('/')] - '0')) - (10 - (s[s.find('/', s.find('/'))] - '0'));
            frame++;
        } else {
            int strike = c - '0';
            score += strike;
            if (frame < 9) {
                if (s[s.find('/') + 1] == '/') {
                    score += 10 - (10 - (s[s.find('/', s.find('/'))] - '0'));
                } else {
                    score += 10 - (10 - (s[s.find('/', s.find('/'))] - '0')) - (10 - (s[s.find('/', s.find('/', s.find('/'))) + 1] - '0'));
                }
            }
        }
    }
    return score;
}